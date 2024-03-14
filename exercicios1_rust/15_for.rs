fn main() {
  let mut i = 0;  
  let mut j = i;  
  while (i + j) < 100 {  
      print!("{}", i + j);  
      i += 1; 
      j += 1; 
  }
  println!();  

  let mut input = String::new();
  std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

}


/*
saída:
02468101214161820222426283032343638404244464850525456586062646668707274767880828486889092949698

*/ 