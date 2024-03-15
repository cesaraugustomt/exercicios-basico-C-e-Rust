/*
9) Escreva um programa que solicite ao usuário um número inteiro positivo e calcule a soma de 
todos os números ímpares de 1 até o número digitado. Imprima em tela o número digitado e a 
soma.
*/ 

use std::io;

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro positivo: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let numero: i32 = input.trim().parse().expect("Entrada inválida");

    if numero < 1 {
        println!("O número digitado não é positivo.");
        return; 
    }

    let mut soma = 0;
    for i in (1..=numero).step_by(2) {
        soma += i;
    }

    println!("Número digitado: {}", numero);
    println!("Soma dos números ímpares de 1 até {}: {}", numero, soma);
}

/*
saída:
Digite um número inteiro positivo: 8
Número digitado: 8
Soma dos n�umeros ímpares de 1 até 8: 16
*/ 