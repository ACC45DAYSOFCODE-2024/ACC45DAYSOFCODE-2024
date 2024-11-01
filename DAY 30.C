#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);

        int diff1 = C - A;
        int diff2 = D - B;

        if (diff1 >= 0 && diff2 >= 0 && (diff1 % 2 == 0) && (diff2 % 2 == 0)) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}
