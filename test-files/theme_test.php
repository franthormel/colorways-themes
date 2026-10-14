<?php
// Theme test: PHP
declare(strict_types=1);

final class User
{
    public function __construct(
        public readonly string $name,
        public readonly int $age = 0,
    ) {}

    public function greet(): string
    {
        return "Hello, {$this->name}! Age: {$this->age}";
    }
}

$users = [new User('Ada', 36), new User('Linus')];
foreach ($users as $user) {
    if ($user->age > 30) {
        echo $user->greet(), PHP_EOL;
    } else {
        echo "Young user", PHP_EOL;
    }
}