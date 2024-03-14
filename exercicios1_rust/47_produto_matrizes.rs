use rand::Rng;

const N: usize = 3; 

fn main() {
    let mut rng = rand::thread_rng(); 
    let mut a = [[0; N]; N]; 
    let mut b = [[0; N]; N]; 
    let mut ab = [[0; N]; N]; 

    for i in 0..N {
        for j in 0..N {
            a[i][j] = 1 + rng.gen_range(0..10);
            b[i][j] = 1 + rng.gen_range(0..10);
        }
    }

    for i in 0..N {
        for j in 0..N {
            let mut sm = 0; 
            for k in 0..N {
                sm += a[i][k] * b[k][j]; 
            }
            ab[i][j] = sm; 
        }
    }

    println!("Matriz resultante 'ab':");

    for i in 0..N {
        for j in 0..N {
            print!("{} ", ab[i][j]); 
        }
        println!(); 
    }
}


/*
saída:
Matriz resultante 'ab':
79 79 96 
166 240 232 
92 160 144 
*/ 