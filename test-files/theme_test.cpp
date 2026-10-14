// Theme test: C++
#include <iostream>
#include <string>
#include <vector>
#include <utility>

class User {
public:
    User(std::string name, int age = 0)
        : name_(std::move(name)), age_(age) {}

    [[nodiscard]] std::string greet() const {
        return "Hello, " + name_ + "! Age: " + std::to_string(age_);
    }

    int age() const { return age_; }

private:
    std::string name_;
    int age_;
};

int main() {
    std::vector<User> users{{"Ada", 36}, {"Linus"}};
    for (const auto& user : users) {
        if (user.age() > 30) {
            std::cout << user.greet() << '\n';
        } else {
            std::cout << "Young user\n";
        }
    }
}