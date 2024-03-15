/*2) Crie um programa que leia um número inteiro do usuário e imprima o número digitado e o seu 
dobro.*/ 

use std::io;

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro: ");

    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

    let numero: i32 = input.trim().parse().expect("Entrada inválida");

    println!("Número digitado: {}", numero);
    println!("Dobro: {}", numero * 2);
}

/*
saída:
Digite um número inteiro: 4
Número digitado: 4
Dobro: 8
*/ 