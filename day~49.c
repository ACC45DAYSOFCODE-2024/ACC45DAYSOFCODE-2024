#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Length of the permutation
        scanf("%d", &N);
        
        int P[N]; // Array to store the permutation

        // Fill the permutation
        for (int i = 1; i <= N; i++) {
            P[i - 1] = i; // Fill with numbers from 1 to N
        }

        // Print the permutation
        for (int i = 0; i < N; i++) {
            printf("%d ", P[i]);
        }
        printf("\n");
    }

    return 0;
}