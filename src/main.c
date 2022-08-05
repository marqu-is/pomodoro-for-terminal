#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 1000

void delay(int ms) {
    clock_t timeDelay = ms +clock();
    while (timeDelay > clock());
    
}

int main() {
    char str[LEN];
    int counter = 3;
    while(counter != 0) {
        printf("\n\n\t%d", counter);
        counter--;

        
        delay(1000);
        system("cls");
    }
    printf("You are breathtaking\n");
    FILE *file_ptr;
    file_ptr = fopen("kotik.txt", "r");
    while(fgets(str, LEN, file_ptr))
    fprintf(stdout, "%s\n", str);
    system("C:\\pomodoro-for-terminal\\src\\god.sh");
    return 0;

}