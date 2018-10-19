#include <iostream>

int main() {
    int i = 10;
    {
        int i = 5;
        {
            float i = 5.2;
            printf("%f\n" , i); // локальная переменная i = 5.2 типа float
        }
        i--;
        printf("%d\n" , i);  // локальная переменная i = 5 типа int
    }
    printf("%d\n" , i);  // локальная переменная i = 10 типа int/**/
    return 0;
}