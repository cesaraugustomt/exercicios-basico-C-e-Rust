use rand::Rng;
use std::io;

const N: usize = 4; 

fn main() {
    let mut rng = rand::thread_rng();
    let mut A = [[0; N]; N]; 
    let mut sm = 0; 

  
    for i in 0..N {
        for j in 0..N {
            A[i][j] = 1 + rng.gen_range(0..10);
        }
    }

    println!("Matriz A");
  
    for i in 0..N {
        for j in 0..N {
            print!("{:2}", A[i][j]); 
        }
        println!(); 
    }

    for i in 0..N {
        for j in 0..N {
            sm += A[i][j];
        }
    }

    println!("A soma dos elementos da matriz é igual a {}", sm); 
}
