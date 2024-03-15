/*
13) Desenvolva uma função que receba um caractere como parâmetro e verifique se é uma vogal.
*/ 

use std::io;

fn eh_vogal(caractere: char) -> bool {

    let caractere = caractere.to_ascii_lowercase();

    match caractere {
        'a' | 'e' | 'i' | 'o' | 'u' => true,
        _ => false,
    }
}

fn main() {
    let mut input = String::new();
    println!("Digite um caractere: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let caractere = input.trim().chars().next().unwrap();

    if eh_vogal(caractere) {
        println!("O caractere '{}' é uma vogal.", caractere);
    } else {
        println!("O caractere '{}' não é uma vogal.", caractere);
    }
}


/*
saída:
Digite um caractere: s
O caractere 's' não é uma vogal.
*/ 