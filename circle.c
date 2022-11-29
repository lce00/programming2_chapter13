#include<math.h>
#include<stdio.h>

struct point {
    int r;
    int x;
    int y;
};

int main(void)
{
    struct point r1 = {20, 0, 0};
    struct point r2 = {20, 0, 0};

    if((r1.r == r2.r) && (r1.x == r2.x) && (r1.y ==r2.y)) printf("같은 원입니다.\n");
    else printf("다른 원입니다.\n");

    return 0;
}