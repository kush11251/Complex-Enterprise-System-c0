#ifndef USER_H
#define USER_H

typedef struct User {
    int id;
    char* name;
} User;

User* create_user(int id, char* name);
void free_user(User* user);

#endif