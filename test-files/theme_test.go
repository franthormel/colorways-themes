// Theme test: Go
package main

import "fmt"

type User struct {
    Name string
    Age  int
}

func (u User) Greet() string {
    return fmt.Sprintf("Hello, %s! Age: %d", u.Name, u.Age)
}

func main() {
    users := []User{{"Ada", 36}, {"Linus", 0}}
    for _, user := range users {
        if user.Age > 30 {
            fmt.Println(user.Greet())
        } else {
            fmt.Println("Young user")
        }
    }
}