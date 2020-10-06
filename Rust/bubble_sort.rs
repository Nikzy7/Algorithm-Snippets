//Example declaration in the main function should be let mut v = [..,..,..]; 
//and then function call --> bubble_sort(&mut v);

pub fn bubble_sort(array: &mut [i32]) {
    let mut swapped = true;
    while swapped {
        swapped = false;
        for i in 1..arr.len() {
            if array[i - 1] > array[i] {
                array.swap(i - 1, i);
                swapped = true
            }
        }
    }
}

