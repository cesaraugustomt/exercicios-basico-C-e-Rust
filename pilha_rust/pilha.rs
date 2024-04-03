use std::io;

const MAX: usize = 10;

struct Pilha {
    vetor: [i32; MAX],
    topo: isize,
}

impl Pilha {
    fn new() -> Pilha {
        Pilha {
            vetor: [0; MAX],
            topo: -1,
        }
    }

    fn empilhar(&mut self, valor: i32) {
        self.topo += 1;
        self.vetor[self.topo as usize] = valor;
    }

    fn consultar_topo(&self) -> Option<&i32> {
        if self.topo >= 0 {
            Some(&self.vetor[self.topo as usize])
        } else {
            None
        }
    }

    fn verificar_pilha_cheia(&self) -> bool {
        self.topo == (MAX - 1) as isize
    }

    fn verificar_pilha_vazia(&self) -> bool {
        self.topo == -1
    }

    fn desempilhar(&mut self) -> Option<i32> {
        if self.topo >= 0 {
            let valor = self.vetor[self.topo as usize];
            self.topo -= 1;
            Some(valor)
        } else {
            None
        }
    }

    fn consultar_altura(&self) -> usize {
        (self.topo + 1) as usize
    }
}

fn main() {
    let mut rayovac = Pilha::new();

    loop {
        println!("\n\n >> PILHA << ");
        println!("\t 1 -> Inserir");
        println!("\t 2 -> TOPO");
        println!("\t 3 -> Remover");
        println!("\t 4 -> Altura");
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
                if rayovac.verificar_pilha_cheia() {
                    println!("\n\n PILHA CHEIA !!!  \n\n");
                } else {
                    println!("\n\n Digite um valor inteiro a ser armazenado na pilha: ");
                    let mut valor = String::new();
                    io::stdin().read_line(&mut valor).expect("Erro ao ler entrada");
                    let valor: i32 = match valor.trim().parse() {
                        Ok(num) => num,
                        Err(_) => continue,
                    };
                    rayovac.empilhar(valor);
                }
            }
            2 => {
                if let Some(topo) = rayovac.consultar_topo() {
                    println!("\n>> o valor do topo da pilha eh: {} \n", topo);
                } else {
                    println!("\n>> Pilha vazia\n");
                }
            }
            3 => {
                if rayovac.verificar_pilha_vazia() {
                    println!("\n\n PILHA VAZIA !!! \n\n");
                } else {
                    if let Some(valor) = rayovac.desempilhar() {
                        println!("\n>> Valor {} removido da pilha \n", valor);
                    }
                }
            }
            4 => {
                println!("\n>> A altura da pilha eh: {}", rayovac.consultar_altura());
            }
            0 => {
                println!("\n\n ... saindo ... \n\n");
                break;
            }
            _ => {
                println!("\n\n .<< Digite uma opcao valida >> \n\n");
            }
        }
    }
}
