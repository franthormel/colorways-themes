// Theme test: TypeScript
interface User {
  name: string;
  age?: number;
}

type Status = "active" | "inactive";

const MAX_AGE: number = 30;

function greet(user: User): string {
  const age = user.age ?? 0;
  return `Hello, ${user.name}! Age: ${age}`;
}

const users: User[] = [{ name: "Ada", age: 36 }, { name: "Linus" }];
for (const user of users) {
  if ((user.age ?? 0) > MAX_AGE) {
    console.log(greet(user));
  } else {
    console.log("Young user");
  }
}