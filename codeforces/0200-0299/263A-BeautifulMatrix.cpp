#include <cstdio>
#include <cstdlib>

#define DIM 5

int main() {
    int in = 0, cnt = -1;

    while (!in) {
        scanf("%d", &in);
        cnt++;
    }

    int row = cnt / DIM, col = cnt % DIM;

    printf("%d", abs(row - 2) + abs(col - 2));

    return 0;
}
