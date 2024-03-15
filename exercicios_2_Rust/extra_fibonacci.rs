/*
EXTRA:
1) Desenvolva uma função que receba um número inteiro como parâmetro e retorne a sequência 
de Fibonacci até aquele número. Imprima a sequência de Fibonnaci dentro da função.
*/ 

fn fibonacci(limite: u32) {
    let mut num1 = 0;
    let mut num2 = 1;
    let mut proximo_termo = 0;

    println!("Sequência de Fibonacci até {}:", limite);

    while proximo_termo <= limite {
        print!("{}, ", proximo_termo);
        let temp = num1;
        num1 = num2;
        num2 = temp + num2;
        proximo_termo = num1;
    }
    println!();
}

fn main() {
    let mut input = String::new();

    println!("Digite um número inteiro para limite da sequência de Fibonacci: ");
    std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
    let limite: u32 = input.trim().parse().expect("Entrada inválida");

    fibonacci(limite);
}


/*
Digite um número inteiro para limite da sequência de Fibonacci: 12
Sequência de Fibonacci até 12:
0, 1, 1, 2, 3, 5, 8, 
*/ 