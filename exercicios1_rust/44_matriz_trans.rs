use rand::Rng;
const N: usize = 3; 

fn main() {
    let mut rng = rand::thread_rng(); 
    let mut a = [[0; N]; N]; 
    let mut at = [[0; N]; N]; 


    for i in 0..N {
        for j in 0..N {
            a[i][j] = 1 + rng.gen_range(0..10);
        }
    }

    println!("Matriz original 'a':");

    for i in 0..N {
        for j in 0..N {
            print!("{} ", a[i][j]);
        }
        println!();
    }

    for i in 0..N {
        for j in 0..N {
            at[j][i] = a[i][j];
        }
    }

    println!("\nMatriz transposta 'at':");

    for i in 0..N {
        for j in 0..N {
            print!("{} ", at[i][j]);
        }
        println!();
    }
}

/*
saída:
Matriz original 'a':
2 10 7 
4 6 5 
3 5 7 

Matriz transposta 'at':
2 4 3 
10 6 5 
7 5 7 
*/ 