use std::io;

const MAX: usize = 5;

struct Fila {
    vetor: [i32; MAX],
    max: usize,
    inicio: usize,
    qtd_elementos: usize,
}

impl Fila {
    fn new() -> Fila {
        Fila {
            vetor: [0; MAX],
            max: MAX,
            inicio: 0,
            qtd_elementos: 0,
        }
    }

    fn enfileirar(&mut self, aux: i32) {
        if self.qtd_elementos < self.max {
            let pos = (self.inicio + self.qtd_elementos) % self.max;
            self.vetor[pos] = aux;
            self.qtd_elementos += 1;
        } else {
            println!("\n\n <<FILA CHEIA>> \n\n");
        }
    }

    fn consultar_proximo(&self) -> Option<i32> {
        if self.qtd_elementos > 0 {
            Some(self.vetor[self.inicio])
        } else {
            println!("\n\n <<FILA VAZIA>> \n\n");
            None
        }
    }

    fn tamanho_fila(&self) -> usize {
        self.qtd_elementos
    }

    fn desenfileirar(&mut self) -> Option<i32> {
        if self.qtd_elementos > 0 {
            let aux = self.vetor[self.inicio];
            self.inicio = (self.inicio + 1) % self.max;
            self.qtd_elementos -= 1;
            Some(aux)
        } else {
            println!("\n\n <<FILA VAZIA>> \n\n");
            None
        }
    }
}

fn main() {
    let mut fila_do_pao = Fila::new();

    loop {
        println!("\n\n >> FILA << ");
        println!("\t 1 -> Inserir");
        println!("\t 2 -> Consultar");
        println!("\t 3 -> Remover");
        println!("\t 4 -> Tamanho");
        println!("\t 0 -> sair");
        println!("\t Digite:  ");

        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Erro ao ler entrada");
        let op: i32 = match input.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        match op {
            1 => {
                println!("\n\n Digite um valor inteiro:  ");
                let mut valor = String::new();
                io::stdin().read_line(&mut valor).expect("Erro ao ler entrada");
                let valor: i32 = match valor.trim().parse() {
                    Ok(num) => num,
                    Err(_) => continue,
                };
                fila_do_pao.enfileirar(valor);
            }
            2 => {
                if let Some(proximo) = fila_do_pao.consultar_proximo() {
                    println!("\n\n O próximo da FILA é: {} \n\n", proximo);
                }
                io::stdin().read_line(&mut String::new()).unwrap(); // Pause
            }
            3 => {
                if let Some(removido) = fila_do_pao.desenfileirar() {
                    println!("\n\n Valor REMOVIDO da FILA : {} \n\n", removido);
                }
                io::stdin().read_line(&mut String::new()).unwrap(); // Pause
            }
            4 => {
                println!("\n\n O tamanho da FILA é: {} \n\n", fila_do_pao.tamanho_fila());
                io::stdin().read_line(&mut String::new()).unwrap(); // Pause
            }
            0 => {
                println!("\n\n ... saindo ... \n\n");
                break;
            }
            _ => {
                println!("\n\n .<< Digite uma opcao valida >> \n\n");
                io::stdin().read_line(&mut String::new()).unwrap(); // Pause
            }
        }
    }
}
