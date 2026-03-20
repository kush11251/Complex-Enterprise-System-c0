#include "src/models/user.h"

User* create_user(int id, char* name) {
    User* user = malloc(sizeof(User));
    user->id = id;
    user->name = name;
    return user;
}

void free_user(User* user) {
    free(user);
}