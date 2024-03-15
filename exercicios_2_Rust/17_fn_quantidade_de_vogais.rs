/*
17) Escreva uma função que receba uma string como parâmetro e retorne a quantidade de vogais 
presentes nela.
*/ 

use std::io;
use std::char;

fn eh_vogal(caractere: char) -> bool {

    let caractere = caractere.to_ascii_lowercase();

    return caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u';
}

fn contar_vogais(string: &str) -> usize {
    string.chars().filter(|&c| eh_vogal(c)).count()
}

fn main() {
    let mut input = String::new();

    println!("Digite uma string: ");
    io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let str = input.trim();

    let num_vogais = contar_vogais(str);

    println!("A quantidade de vogais na string é: {}", num_vogais);
}

/*
saída:
Digite uma string: copo
A quantidade de vogais na string é: 2
*/ 