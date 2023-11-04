#define TARGET "Hello world!"

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <unistd.h>

int main() {
    const char target[] = TARGET;

    char* tmp = (char*) malloc(sizeof(target));
    for (unsigned long i = 0; i < sizeof(target) - 1; i++) tmp[i] = ' ';
    tmp[sizeof(target) - 1] = '\0';

    time_t t;
    srand((unsigned) time(&t));
    unsigned long long count = 0;

    while (strcmp(tmp, target) != 0) {
        for (unsigned long i = 0; i < sizeof(target) - 1; i++) {
            count++;
            if (count == 0) {
                printf("NOT GONNA HAPPEN!");
                return EXIT_FAILURE;
            }
            tmp[i] = (char) (32 + rand() % 95);
        }
        printf("%s\n", tmp);
    }
    sleep(1);
    printf("It takes you %llu rand() to arrive at \"%s\"\n", count, target);

    return EXIT_SUCCESS;
}
