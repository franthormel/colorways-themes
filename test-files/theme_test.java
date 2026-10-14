// Theme test: Java
import java.util.List;

public class ThemeTest {
    public record User(String name, int age) {
        public String greet() {
            return String.format("Hello, %s! Age: %d", name, age);
        }
    }

    public static void main(String[] args) {
        List<User> users = List.of(new User("Ada", 36), new User("Linus", 0));
        for (User user : users) {
            if (user.age() > 30) {
                System.out.println(user.greet());
            } else {
                System.out.println("Young user");
            }
        }
    }
}