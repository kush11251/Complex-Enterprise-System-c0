#include "src/services/user_service.h"
#include "src/repositories/user_repository.h"

UserService* create_user_service() {
    UserService* service = malloc(sizeof(UserService));
    service->repository = create_user_repository();
    return service;
}

User* get_user(UserService* service, int id) {
    return get_user_from_repository(service->repository, id);
}

void free_user_service(UserService* service) {
    free_user_repository(service->repository);
    free(service);
}