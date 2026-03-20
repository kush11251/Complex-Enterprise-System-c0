#ifndef USER_REPOSITORY_H
#define USER_REPOSITORY_H

#include "src/models/user.h"

UserRepository* create_user_repository();
User* get_user_from_repository(UserRepository* repository, int id);
void free_user_repository(UserRepository* repository);

#endif