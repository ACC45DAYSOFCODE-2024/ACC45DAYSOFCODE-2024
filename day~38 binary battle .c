#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int rounds = 0;
        int teams = N;
        while (teams > 1) {
            teams /= 2;
            rounds++;
        }
        int total_time = (rounds - 1) * B + rounds * A;
        printf("%d\n", total_time);
    }

    return 0;
}
