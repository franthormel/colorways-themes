/* Theme test: C */
#include <stdio.h>
#include <stdlib.h>

#define MAX_USERS 3

typedef struct {
    const char *name;
    int age;
} User;

static void greet(const User *user) {
    if (user->age > 30) {
        printf("Hello, %s! Age: %d\n", user->name, user->age);
    } else {
        puts("Young user");
    }
}

int main(void) {
    User users[MAX_USERS] = {
        {"Ada", 36},
        {"Linus", 0},
        {"Grace", 45}
    };
    for (int i = 0; i < MAX_USERS; ++i) {
        greet(&users[i]);
    }
    return EXIT_SUCCESS;
}