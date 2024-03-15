/*
16) Crie uma função que receba um número inteiro como parâmetro e verifique se ele é primo.
*/ 

use std::io;

fn eh_primo(numero: i32) -> bool {
    if numero <= 1 {
        return false;
    }

    for i in 2..=((numero as f64).sqrt() as i32) {
        if numero % i == 0 {
            return false; 
        }
    }
    true 
}

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let num: i32 = input.trim().parse().expect("Entrada inválida");

    if eh_primo(num) {
        println!("{} é um número primo.", num);
    } else {
        println!("{} não é um número primo.", num);
    }
}


/*
saída:
Digite um número inteiro: 4
4 não é um número primo.
*/ 