fn main() {
  for i in (1..=9).rev() {  
      println!("{:>4} x 6 {:>4}", i, i * 6);  
  }
  println!(); 
  let mut input = String::new();
  std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

}


/*
saída:
   9 x 6   54
   8 x 6   48
   7 x 6   42
   6 x 6   36
   5 x 6   30
   4 x 6   24
   3 x 6   18
   2 x 6   12
   1 x 6    6

*/ 