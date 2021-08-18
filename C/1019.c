#include <stdio.h>

int main() 
{
    int t, h, m, s, r;
    scanf ("%d", &t);
    h = t / 3600;
    r = t % 3600;
    m = r / 60;
    r = r % 60;
    s = r;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}