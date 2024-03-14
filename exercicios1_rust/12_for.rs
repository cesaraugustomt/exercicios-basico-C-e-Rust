fn main() {
  for _ in 0..20 {  
      print!("*");  
  }

  println!();  
  let mut input = String::new();
  std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

}

/*
saída: 
********************
*/ 