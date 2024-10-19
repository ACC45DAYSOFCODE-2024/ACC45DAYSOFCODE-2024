#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int X; 
        scanf("%d", &X);

           int totalAssignmentTime = 3; 
           int submissionTime = 10; 
        
    if (X + totalAssignmentTime <= submissionTime) {
     printf("Yes\n");
      } else {
     printf("No\n");
        }
    }

    return 0;
}
