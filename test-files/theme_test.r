# Theme test: R
library(tibble)

User <- function(name, age = 0) {
  structure(list(name = name, age = age), class = "User")
}

greet <- function(user) {
  if (user$age > 30) {
    sprintf("Hello, %s! Age: %d", user$name, user$age)
  } else {
    "Young user"
  }
}

users <- list(User("Ada", 36), User("Linus"))
for (user in users) {
  cat(greet(user), "\n")
}