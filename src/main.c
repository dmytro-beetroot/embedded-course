#include <stdio.h>
#include <unistd.h>

void app_main(void) {
    while (1) {
        printf("Hello, Beetroot!\n");
        sleep(1);
    }
}