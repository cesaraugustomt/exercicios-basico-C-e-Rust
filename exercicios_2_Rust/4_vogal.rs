/*4) Escreva um programa que leia um caractere do usuário e verifique se é uma vogal.
*/ 
use std::io;

fn main() {
    let mut input = String::new();

    println!("Digite um caractere: ");

    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

    let caractere = input.chars().next().expect("Entrada inválida");

    if "aeiouAEIOU".contains(caractere) {
        println!("O caractere '{}' é uma vogal.", caractere);
    } else {
        println!("O caractere '{}' não é uma vogal.", caractere);
    }
}


/*
saída:
Digite um caractere: v
O caractere 'v' não é uma vogal.
*/ 