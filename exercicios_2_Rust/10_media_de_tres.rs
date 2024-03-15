/*
10) Escreva um programa que calcule a média de três notas e informe se o aluno foi aprovado, 
reprovado ou de recuperação, considerando a média mínima para aprovação igual a 7, média
entre 5 e 6.99 igual a recuperação, e média menor que 5 igual a reprovação.
*/ 
use std::io;

fn main() {
    let mut input = String::new();

    println!("Digite as três notas do aluno: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let notas: Vec<f32> = input.split_whitespace()
                                .map(|s| s.parse().expect("Entrada inválida"))
                                .collect();

    let media: f32 = notas.iter().sum::<f32>() / 3.0;

    if media >= 7.0 {
        println!("Aluno aprovado!");
    } else if media >= 5.0 {
        println!("Aluno em recuperação.");
    } else {
        println!("Aluno reprovado.");
    }
}


/*
saída:
Digite as três notas do aluno: 8
6
10
Aluno aprovado!
*/ 