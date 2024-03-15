/*
6) Crie um programa que receba uma sequência de 5 números inteiros e retorne apenas o segundo 
maior valor presente na sequência
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

    for i in 0..4 {
        for j in 0..(4 - i) {
            if numeros[j] > numeros[j + 1] {
                numeros.swap(j, j + 1);
            }
        }
    }

    println!("O segundo maior valor é: {}", numeros[3]);
}


/*
saída:
Digite cinco números inteiros:
Número 1: 4
Número 2: 8
Número 3: 12
Número 4: 21
Número 5: 7
O segundo maior valor é: 12

*/ 