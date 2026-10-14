#!/usr/bin/env python3
"""Theme test: Python."""
from dataclasses import dataclass
from typing import Optional

@dataclass
class User:
    name: str
    age: int = 0

    def greet(self) -> str:
        # Comment: keywords, strings, f-strings, numbers
        return f"Hello, {self.name}! Age: {self.age}"

def main() -> None:
    users = [User("Ada", 36), User("Linus")]
    for user in users:
        if user.age > 30:
            print(user.greet())
        else:
            print("Young user")

if __name__ == "__main__":
    main()