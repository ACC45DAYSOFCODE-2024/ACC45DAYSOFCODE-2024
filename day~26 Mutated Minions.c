#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int wolverineCount = 0; 

        for (int i = 0; i < N; i++) {
            int initialCharacteristic;
            scanf("%d", &initialCharacteristic);

            int newCharacteristic = initialCharacteristic + K;

            if (newCharacteristic % 7 == 0) {
                wolverineCount++;
            }
        }

        printf("%d\n", wolverineCount);
    }

    return 0;
}
