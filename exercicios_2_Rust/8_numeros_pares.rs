/*
8) Escreva um programa que solicite ao usuário um número inteiro positivo e exiba na tela todos 
os números pares de 0 até o número digitado. Imprima em tela o número digitado e a soma.
*/ 
use std::io;

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro positivo: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let numero: i32 = input.trim().parse().expect("Entrada inválida");

    if numero < 0 {
        println!("O número digitado não é positivo.");
        return; 
    }

    println!("Números pares de 0 até {}: ", numero);
    let mut soma = 0;
    for i in (0..=numero).step_by(2) {
        print!("{} ", i);
        soma += i;
    }

    println!("\nNúmero digitado: {}", numero);
    println!("Soma: {}", soma);
}



/*
saída:
Digite um número inteiro positivo: 6
Números pares de 0 até 6:
0 2 4 6 
Número digitado: 6
Soma: 12
*/ 