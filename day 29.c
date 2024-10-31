#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q);

        int totalServes = P + Q;

        if (totalServes % 4 == 0 || totalServes % 4 == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}
