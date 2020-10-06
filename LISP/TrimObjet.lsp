; if you looking for some method to trim objects automatically
; this code can help you
; only work with AutoCAD
(defun c:test ( / xL p dir dirx Emax Emin d_off px xL2 px1 px2)
   (if (and
           (setq xL (car (entsel "\nPick a XLine for cutting edge... ")))
           (setq p (getpoint "\nSpecify the side to trim on: "))
           (setq dir (cdr (assoc 11 (entget xL))))
           (setq dir (list (abs (car dir)) (abs (cadr dir)) (last dir)))
           (or
               (setq dirx (equal dir '(1.0 0.0 0.0) 1e-5))
               (equal dir '(0.0 1.0 0.0) 1e-5)
           )
       )
       (progn
           (setq Emax (getvar 'extmax))
           (setq Emin (getvar 'extmin))
           (setq d_off (/ (distance Emax Emin) 4000)); <- change depending on the
                                                     ;    size of the model you have. 
           (command "_offset" d_off xL "_non" p "")
           (setq xL2 (entlast))
           (setq px (cdr (assoc 10 (entget xL2))))
           (if dirx
               (setq px1 (list (car Emin) (cadr px))
                     px2 (list (car Emax) (cadr px)))
               (setq px1 (list (car px) (cadr Emin) )
                     px2 (list (car px) (cadr Emax)))
           )
           (command "_zoom" "_w" "_non" px1 "_non" px2)
           (command "_trim" xL "" "_f" "_non" px1 "_non" px2 "" "")
           (entdel xL2)
           (command "_zoom" "_p")
       )
   )
   (princ)
)