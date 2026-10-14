// Theme test: Rust
use std::fmt;

#[derive(Debug)]
struct User {
    name: String,
    age: u32,
}

impl User {
    fn new(name: &str, age: u32) -> Self {
        Self { name: name.to_string(), age }
    }

    fn greet(&self) -> String {
        format!("Hello, {}! Age: {}", self.name, self.age)
    }
}

fn main() {
    let users = vec![User::new("Ada", 36), User::new("Linus", 0)];
    for user in &users {
        if user.age > 30 {
            println!("{}", user.greet());
        } else {
            println!("Young user");
        }
    }
}