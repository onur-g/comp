#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int force[3] = {0};

    for (int i = 0; i < 3 * n; i++) {
        int component;
        scanf("%d", &component);

        force[i % 3] += component;
    }

    if (!force[0] && !force[1] && !force[2]) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
