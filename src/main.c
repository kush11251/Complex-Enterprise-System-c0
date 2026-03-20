#include "src/services/user_service.h"

int main() {
    UserService* service = create_user_service();
    User* user = get_user(service, 1);
    printf("User ID: %d, Name: %s\n", user->id, user->name);
    free_user(user);
    free_user_service(service);
    return 0;
}