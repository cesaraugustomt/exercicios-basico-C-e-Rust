use std::io; 

fn main() {
    let mut input = String::new(); 

    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

    let x: i32 = input.trim().parse().expect("Falha ao converter para número");

    if x > 10 { 
        println!("O numero e maior que 10"); 
    } else { 
        println!("O numero e menor que 10"); 
    }
}


/*
input: 38
retorno: o numero e maior que 10

*/ 