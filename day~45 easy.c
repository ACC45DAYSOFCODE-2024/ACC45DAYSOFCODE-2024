#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N; 
        scanf("%d", &N);

        int totalCost = (N / 5) * 4 + (N % 5);
        printf("%d\n", totalCost);
    }

    return 0;
}
