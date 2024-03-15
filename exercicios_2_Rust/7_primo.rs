/*7) Desenvolva um programa que leia um número inteiro e verifique se ele é primo.*/ 

use std::io;

fn eh_primo(numero: i32) -> bool {
    if numero <= 1 {
        return false;
    }
    let mut i = 2;
    while i * i <= numero {
        if numero % i == 0 {
            return false;
        }
        i += 1;
    }
    true
}

fn main() {
    println!("Digite um número inteiro: ");
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let num: i32 = input.trim().parse().expect("Entrada inválida");

    if eh_primo(num) {
        println!("{} é um número primo.", num);
    } else {
        println!("{} não é um número primo.", num);
    }
}


/*
saída:
Digite um número inteiro: 3
3 é um número primo.
*/ 