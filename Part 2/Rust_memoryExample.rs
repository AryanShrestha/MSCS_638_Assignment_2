fn main() {
    let s = String::from("Hello");
    print_string(&s);
    println!("Back in main: {}", s);
}

fn print_string(text: &String) {
    println!("Inside function: {}", text);
}