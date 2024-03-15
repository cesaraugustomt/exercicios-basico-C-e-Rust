/*
12) Crie uma função que receba três números inteiros como parâmetros e retorne a soma deles.
Imprima a soma fora da função.
*/ 
use std::io;

fn calcular_soma(num1: i32, num2: i32, num3: i32) -> i32 {
    num1 + num2 + num3
}

fn main() {
    let mut input = String::new();

    println!("Digite três números inteiros: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let mut nums = input.trim().split_whitespace();

    let num1: i32 = nums.next().unwrap().parse().expect("Entrada inválida");
    let num2: i32 = nums.next().unwrap().parse().expect("Entrada inválida");
    let num3: i32 = nums.next().unwrap().parse().expect("Entrada inválida");

    let soma = calcular_soma(num1, num2, num3);

    println!("A soma dos três números é: {}", soma);
}

/*
saída:
Digite três números inteiros: 4
6
8
A soma dos três números é: 18
*/ 