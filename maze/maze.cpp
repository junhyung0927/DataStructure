#include <stdio.h>

#include "stack.h"

#define MAX_STACK_SIZE 100
#define MAZE_SIZE 6

element here = { 1,0 }, entry = { 1,0 };

char maze[MAZE_SIZE][MAZE_SIZE] = {
        { '1', '1', '1', '1', '1', '1' },
        { 'e', '0', '1', '0', '0', '1' },
        { '1', '0', '0', '0', '1', '1' },
        { '1', '0', '1', '0', '1', '1' },
        { '1', '0', '1', '0', '0', 'x' },
        { '1', '1', '1', '1', '1', '1' },
};
// ��ġ�� ���ÿ� ����
void push_loc(StackType* s, int r, int c)
{
    if (r < 0 || c < 0) return;
    if (maze[r][c] != '1' && maze[r][c] != '.') {
        element tmp;
        tmp.r = r;
        tmp.c = c;
        push(s, tmp);
    }
}
// �̷θ� ȭ�鿡 ����Ѵ�. 
void maze_print(char maze[MAZE_SIZE][MAZE_SIZE])
{
    printf("\n");
    for (int r = 0; r < MAZE_SIZE; r++) {
        for (int c = 0; c < MAZE_SIZE; c++) {
            printf("%c", maze[r][c]);
        }
        printf("\n");
    }
}

int main(void)
{
    int r, c;
    StackType s;

    init_stack(&s);
    here = entry;
    while (maze[here.r][here.c] != 'x') {
        r = here.r;
        c = here.c;
        maze[r][c] = '.';
        maze_print(maze);
        push_loc(&s, r - 1, c);
        push_loc(&s, r + 1, c);
        push_loc(&s, r, c - 1);
        push_loc(&s, r, c + 1);
        if (is_empty(&s)) {
            printf("����\n");
            return 1;
        }
        else
            here = pop(&s);
    }
    printf("����\n");
    return 0;

}