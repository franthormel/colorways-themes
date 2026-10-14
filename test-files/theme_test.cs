// Theme test: C#
using System;
using System.Collections.Generic;

namespace ThemeTest;

public record User(string Name, int Age = 0)
{
    public string Greet() => $"Hello, {Name}! Age: {Age}";
}

public static class Program
{
    public static void Main()
    {
        var users = new List<User> { new("Ada", 36), new("Linus") };
        foreach (var user in users)
        {
            if (user.Age > 30)
                Console.WriteLine(user.Greet());
            else
                Console.WriteLine("Young user");
        }
    }
}