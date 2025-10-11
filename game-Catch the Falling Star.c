#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {
    int pos = 5, starPos, i;
    char ch;
    int score = 0;

    printf("🌟 Welcome to 'Catch the Falling Star'! 🌟\n");
    printf("Use 'a' to move LEFT and 'd' to move RIGHT.\n");
    printf("Catch the star (*) before it hits the ground!\n\n");
    printf("Press any key to start...");
    getch();

    while (1) {
        starPos = rand() % 10 + 1;
        for (i = 0; i < 10; i++) {
            system("cls");
            printf("Score: %d\n\n", score);
            for (int j = 0; j < i; j++)
                printf("\n");
            for (int j = 0; j < starPos; j++)
                printf(" ");
            printf("*\n");
            for (int j = 0; j < 10; j++)
                printf("-");
            printf("\n");
            for (int j = 0; j < pos; j++)
                printf(" ");
            printf("⬜\n");
            Sleep(150);
            if (kbhit()) {
                ch = getch();
                if (ch == 'a' && pos > 0)
                    pos--;
                else if (ch == 'd' && pos < 9)
                    pos++;
                else if (ch == 'x') {
                    printf("\nGame Over! Final Score: %d\n", score);
                    return 0;
                }
            }
            if (i == 9 && starPos == pos)
                score++;
        }
    }
}
