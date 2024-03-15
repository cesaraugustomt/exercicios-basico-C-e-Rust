/*
15) Faça uma função que receba uma sequência 5 de números inteiros como parâmetro e retorne o 
maior e o menor valor.
*/ 

use std::io;

fn encontrar_maior_menor(numeros: &[i32]) -> (i32, i32) {
    let mut maior = numeros[0];
    let mut menor = numeros[0];

    for &num in numeros {
        if num > maior {
            maior = num;
        } else if num < menor {
            menor = num;
        }
    }

    (maior, menor)
}

fn main() {
    let mut numeros = Vec::new();

    println!("Digite cinco números inteiros:");
    for i in 0..5 {
        let mut input = String::new();
        print!("Número {}: ", i + 1);
        io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
        let num: i32 = input.trim().parse().expect("Entrada inválida");
        numeros.push(num);
    }

    let (maior, menor) = encontrar_maior_menor(&numeros);

    println!("O maior valor é: {}", maior);
    println!("O menor valor é: {}", menor);
}

/*
saída:
Digite cinco números inteiros:
Número 1: 4
Número 2: 8
Número 3: 6
Número 4: 12
Número 5: 24
O maior valor é: 24
O menor valor é: 4

*/ 