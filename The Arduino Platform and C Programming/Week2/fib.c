#include <stdio.h>

int main () {
    int f1 = 0, f2 = 1, next;

    for (int i = 0; i < 6; i++) {
        if (i <= 1) next = i;
        else next = f1 + f2;

        printf("%d ", next);

        f1 = f2;
        f2 = next;
    }

    return 0;
}
