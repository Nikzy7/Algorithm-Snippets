// Libraries in rust
use std::io;
use std::{i32};
        
        
 // Main Functions
 fn main() 
 {
    println!("Please enter First number : ");
    let mut first = String::new();
    io::stdin().read_line(&mut first).expect("Failed to read line");

          
    println!("Please enter second number : ");
    let mut second = String::new();
    io::stdin().read_line(&mut second).expect("Failed to read line");
          
    let a: i32 = first.trim().parse().ok().expect("Program only processes numbers, Enter number");
    let b: i32 = second.trim().parse().ok().expect("Program only processes numbers, Enter number");
    println!("Addition of two numbers is: {}", a + b);
 }
