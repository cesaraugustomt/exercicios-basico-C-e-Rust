fn main() {
  for i in (3..=100).step_by(3) {  
      print!("{}\t", i); 
  }
  println!();  
  let mut input = String::new();
  std::io::stdin().read_line(&mut input).expect("Falha ao ler a entrada");

}


/*
saída:

3       6       9       12      15      18      21      24      27      30      33      36      39      42      45   48       51      54      57      60      63      66      69      72      75      78      81      84      87      90   93       96      99



*/ 