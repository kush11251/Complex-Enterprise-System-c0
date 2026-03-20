#include "src/config/config.h"

void print_config() {
    printf("Database Host: %s, Port: %d\n", DATABASE_HOST, DATABASE_PORT);
}