// Bubble sort program for implementation of BubbleSort
fn BubbleSortt(mut vec: Vec<i32>) -> Vec<i32> {
    loop {
       
       // Default value of swap is false because it help us to know in the last.
        let mut swap = false;
        
        // Iterating over the length of vec so that we can find the value which is not in order
        let mut i = 0;
        while i < vec.len() {
            if i >= vec.len()-1 { break; }
            if vec[i] > vec[i+1] {
            //making swap true because above statement is true and our vec needs to swap
                swap = true;
                //Swapping code
                let value = vec[i];
                vec.remove(i);
                vec.insert(i+1, value);
                break;
            }
            i += 1;
        }

        // so if swap is false then our vec is already swapped
        if !swap { break; }
    }

    vec
}
