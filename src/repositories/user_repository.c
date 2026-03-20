#include "src/repositories/user_repository.h"

UserRepository* create_user_repository() {
    UserRepository* repository = malloc(sizeof(UserRepository));
    // Initialize repository
    return repository;
}

User* get_user_from_repository(UserRepository* repository, int id) {
    // Implement logic to retrieve user from repository
    User* user = malloc(sizeof(User));
    user->id = id;
    user->name = "John Doe";
    return user;
}

void free_user_repository(UserRepository* repository) {
    free(repository);
}