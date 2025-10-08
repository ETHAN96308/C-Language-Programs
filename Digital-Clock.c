#include <stdio.h>
#include <time.h>
#include <unistd.h>   // for sleep()

int main() {
    while (1) {
        time_t t;
        struct tm *current;

        t = time(NULL);
        current = localtime(&t);

        printf("\r🕒 %02d:%02d:%02d", 
               current->tm_hour, 
               current->tm_min, 
               current->tm_sec);

        fflush(stdout);
        sleep(1);
    }
    return 0;
}
