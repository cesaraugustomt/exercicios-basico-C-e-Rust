/*3) Desenvolva um programa que leia três números inteiros do usuário e imprima os três valores e 
a soma deles.*/ 
use std::io;

fn main() {
    let mut input = String::new();

    println!("Digite três números inteiros: ");

    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

    let nums: Vec<i32> = input
        .split_whitespace()
        .map(|s| s.parse().expect("Entrada inválida"))
        .collect();

    let soma: i32 = nums.iter().sum();

    println!("Número 1: {}", nums[0]);
    println!("Número 2: {}", nums[1]);
    println!("Número 3: {}", nums[2]);
    println!("Soma dos três números: {}", soma);
}


/*
saída:
Digite três números inteiros: 4
6
8
Número 1: 4
Número 2: 6
Número 3: 8
Soma dos três números: 18

*/ 