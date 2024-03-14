use rand::Rng;

const N: usize = 3; 

fn main() {
    let mut rng = rand::thread_rng(); 
    let mut a = [[0; N]; N]; 
    let mut ehsimetrica = true; 


    for i in 0..N {
        for j in 0..N {
            a[i][j] = 1 + rng.gen_range(0..10);
        }
    }

    for i in 0..N {
        for j in 0..i {
            if a[i][j] != a[j][i] {
                ehsimetrica = false; 
                break; 
            }
        }
        if !ehsimetrica { 
            break; 
        }
    }

    if ehsimetrica {
        println!("A matriz 'a' é simétrica.");
    } else {
        println!("A matriz 'a' não é simétrica.");
    }
}


/*
saída:
A matriz 'a' nao e simétrica.
*/ 