fn main() {
  for ch in 'a'..='z' { 
      println!("O valor ASCII de {} é {}", ch, ch as u8);  
  }
  println!();  
  let mut input = String::new();
  std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");
}

/*
saída:
O valor ASCII de a é 97
O valor ASCII de b é 98
O valor ASCII de c é 99
O valor ASCII de d é 100
O valor ASCII de e é 101
O valor ASCII de f é 102
O valor ASCII de g é 103
O valor ASCII de h é 104
O valor ASCII de i é 105
O valor ASCII de j é 106
O valor ASCII de k é 107
O valor ASCII de l é 108
O valor ASCII de m é 109
O valor ASCII de n é 110
O valor ASCII de o é 111
O valor ASCII de p é 112
O valor ASCII de q é 113
O valor ASCII de r é 114
O valor ASCII de s é 115
O valor ASCII de t é 116
O valor ASCII de u é 117
O valor ASCII de v é 118
O valor ASCII de w é 119
O valor ASCII de x é 120
O valor ASCII de y é 121
O valor ASCII de z é 122
*/ 