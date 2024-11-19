#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int S, X, Y, Z; 
        scanf("%d %d %d %d", &S, &X, &Y, &Z);
      int totalUsedMemory = X + Y;

        int remainingMemory = S - totalUsedMemory;

        if (remainingMemory >= Z) {
            printf("0\n");
        } else {
    
            int appsToDelete = (Z - remainingMemory + X - 1) / X;
            printf("%d\n", appsToDelete);
        }
    }

    return 0;
}