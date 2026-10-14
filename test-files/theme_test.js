// Theme test: JavaScript
import { readFile } from "node:fs/promises";

const MAX_AGE = 30;

class User {
    constructor(name, age = 0) {
        this.name = name;
        this.age = age;
    }

    greet() {
        return `Hello, ${this.name}! Age: ${this.age}`;
    }
}

async function main() {
    const users = [new User("Ada", 36), new User("Linus")];
    for (const user of users) {
        if (user.age > MAX_AGE) {
            console.log(user.greet());
        } else {
            console.log("Young user");
        }
    }
    // await readFile("data.json", "utf8");
}

main().catch(console.error);