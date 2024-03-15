/*
EXTRA:
2) Desenvolva uma função que receba um número inteiro e verifique se é um número de 
Armstrong, ou seja, a soma dos cubos de seus dígitos é igual ao próprio número. Imprima se é 
ou não um número de Armstrong fora da função
*/ 

fn eh_numero_armstrong(mut numero: u32) -> bool {
    let mut numero_original = numero;
    let mut soma_cubos = 0;

    while numero > 0 {
        let digito = numero % 10;
        soma_cubos += digito * digito * digito;
        numero /= 10;
    }

    soma_cubos == numero_original
}

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro: ");
    std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let num: u32 = input.trim().parse().expect("Entrada inválida");

    if eh_numero_armstrong(num) {
        println!("{} é um número de Armstrong.", num);
    } else {
        println!("{} não é um número de Armstrong.", num);
    }
}

/*
Digite um número inteiro: 8
8 não é um número de Armstrong.
*/ 