#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include "src/models/user.h"

UserService* create_user_service();
User* get_user(UserService* service, int id);
void free_user_service(UserService* service);

#endif