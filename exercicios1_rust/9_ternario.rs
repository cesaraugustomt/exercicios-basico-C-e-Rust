use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

    let numero: i32 = input.trim().parse().expect("Falha ao converter para número");

    let x = if numero > 10 { 1 } else { 0 };

    println!("{}", x);
}

/*
input: 12
retorno: 1
*/ 