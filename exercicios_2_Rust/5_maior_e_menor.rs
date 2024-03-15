/*
5) Crie um programa que leia uma sequência de 5 números inteiros e imprima o maior e o menor 
valor.
*/ 

use std::io;

fn main() {
    let mut numeros = Vec::new();

    println!("Digite cinco números inteiros:");

    for i in 0..5 {
        let mut input = String::new();
        println!("Número {}: ", i + 1);
        io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
        let numero: i32 = input.trim().parse().expect("Entrada inválida");
        numeros.push(numero);
    }

    let maior = *numeros.iter().max().expect("Nenhum número fornecido");
    let menor = *numeros.iter().min().expect("Nenhum número fornecido");

    println!("O maior valor é: {}", maior);
    println!("O menor valor é: {}", menor);
}

/*
saída:
Digite cinco números inteiros:
Número 1: 2
Número 2: 12
Número 3: 8
Número 4: 4
Número 5: 21
O maior valor é: 21
O menor valor é: 2
*/ 