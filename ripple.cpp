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

    int curr = 0;
    while (strcmp(tmp, target) != 0) {
        count++;
        if (count == 0) {
            printf("NOT GONNA HAPPEN!");
            return EXIT_FAILURE;
        }
        tmp[curr] = (char) (32 + rand() % 95);
        if (tmp[curr] == target[curr]) curr++;
        printf("%s\n", tmp);
        usleep(10 * 1000);
    }
    sleep(1);
    printf("It takes you %llu rand() to arrive at \"%s\"\n", count, target);

    return EXIT_SUCCESS;
}
