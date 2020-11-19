#include <stdio.h>

void draw_star(int n);
void draw_star_reverse(int n);

int main() {

    draw_star(5);
    printf("\n");
    draw_star_reverse(5);
    return 0;
}

void draw_star(int n) {
    if (n == 0) return;

    draw_star(--n);

    for (int i = 0; i <= n; i++) {
        printf("*");
    }

    printf("\n");
}

void draw_star_reverse(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }

    printf("\n");

    if (n == 0)
        return;

    draw_star_reverse(--n);
}