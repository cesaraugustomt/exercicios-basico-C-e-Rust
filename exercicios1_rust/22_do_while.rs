use std::io;

fn main() {
    let mut num = String::new();  
    println!("Enter a number: ");  
    io::stdin().read_line(&mut num).expect("Failed to read line"); 
    let num: i32 = num.trim().parse().expect("Please enter a valid number");  

    let mut i = 0;  
    while num >= i {  
        i += 1;  
        println!("{}", i);  
    }
}

/*
input: 6
saída:
Enter a number: 6
1
2
3
4
5
6
7

*/ 