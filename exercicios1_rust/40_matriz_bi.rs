use std::io;

fn main() {
    const N: usize = 3; 
    let mut matriz = [[0; N]; N]; 

    for i in 0..N { 
        for j in 0..N { 
            println!("Informe o valor da linha {}, coluna {}.", i, j); 
            let mut input = String::new(); 
            io::stdin().read_line(&mut input).expect("Falha ao ler a linha"); 
            let value: i32 = input.trim().parse().expect("Entre com um número"); 
            matriz[i][j] = value; 
    }

    print!("\x1B[2J\x1B[1;1H"); 
    for i in 0..N { 
        for j in 0..N { 
            print!("{:4} ", matriz[i][j]); 
        }
        println!();
    }
  }
}

/*
saída matricial após informar os números:
  4    2    6 
   1   14    8 
   2    8    2 
*/ 