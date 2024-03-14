// adicione crossterm ao seu arquivo Cargo.toml:[dependencies]
// crossterm = "0.20"

use std::io::{self, Write};
use crossterm::event::{read, Event, KeyCode};

fn main() -> io::Result<()> {
    loop {
        if let Event::Key(event) = read()? {
            if let KeyCode::Char(ch) = event.code {
                if ch == 'X' {
                    break; 
                }
                print!("{}", (ch as u8 + 1) as char); 
                io::stdout().flush()?;
            }
        }
    }
    println!(); 
    Ok(())
}
