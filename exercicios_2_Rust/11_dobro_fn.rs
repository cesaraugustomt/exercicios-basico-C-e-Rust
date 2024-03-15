/*
11) Escreva um programa que leia um número inteiro do usuário e retorne o seu dobro utilizando 
uma função.
*/ 

use std::io;

fn calcular_dobro(numero: i32) -> i32 {
    numero * 2
}

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let num: i32 = input.trim().parse().expect("Entrada inválida");

    let resultado = calcular_dobro(num);

    println!("O dobro de {} é: {}", num, resultado);
}

/*
saída:
Digite um número inteiro: 8
O dobro de 8 é: 16
*/ 