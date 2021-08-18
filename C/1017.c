#include <stdio.h>

int main() {
    double d, t, s;
    scanf("%lf %lf", &d, &t);
    s = d * t / 12;
    printf("%.3lf\n", s);
    return 0;
}