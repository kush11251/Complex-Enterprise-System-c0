FROM gcc:latest

WORKDIR /app

COPY . /app

RUN gcc -o main src/main.c src/services/user_service.c src/repositories/user_repository.c src/models/user.c src/utils/string_utils.c

CMD ["./main"]