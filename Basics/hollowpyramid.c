#include <stdio.h>

void hollow_pyramid(int n) {
    for (int i = 1; i <= n; i++) { 
   
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    hollow_pyramid(rows);
    return 0;
}
