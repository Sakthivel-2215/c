#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5,m6;
    float total, percentage;
    int per;

    if (scanf("%d %d %d %d %d %d", &m1, &m2, &m3, &m4, &m5, &m6) != 6)
        return 0;

    total = m1 + m2 + m3 + m4 + m5 + m6;
    percentage = (total / 600.0f) * 100.0f;
    per = (int) percentage;

    if (per >= 95) {printf("Grade = A\n");
    }
    else if (per >= 85){ printf("Grade = B\n"); }
    else if (per >= 75) {printf("Grade = C\n"); }
    else if (per >= 65){ printf("Grade = D\n"); }
    else if (per >= 45) {printf("Grade = E\n"); }
    else {printf("Grade = F\n"); }

    return 0;
}
