/*
14) Escreva uma função que calcule e retorne o fatorial de um número fornecido pelo usuário.
*/ 
use std::io;

fn calcular_fatorial(numero: u64) -> u64 {

    if numero == 0 {
        return 1;
    } else {
        let mut fatorial = 1;

        for i in 1..=numero {
            fatorial *= i;
        }
        return fatorial;
    }
}

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let num: u64 = input.trim().parse().expect("Entrada inválida");

    let resultado = calcular_fatorial(num);

    println!("O fatorial de {} é: {}", num, resultado);
}

/*
saída:
Digite um número inteiro: 2
O fatorial de 2 é: 2
*/ 