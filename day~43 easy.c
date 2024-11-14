#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X, P; // Input values
        scanf("%d %d %d", &N, &X, &P);

        // Calculate the total marks Chef obtained
        int total_marks = 3 * X - (N - X);

        // Check if Chef passes or fails
        if (total_marks >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}
