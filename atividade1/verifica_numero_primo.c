#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    int primo = 1;

    if (num <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }
    printf("%d\n", primo);
    return 0;
}
