#include<stdio.h>
int main()
{
    int a=20;
    int *p, *q;
    p=&a;
    q=p;
    printf("%d ", a);
    *p=30;
    printf("%d ", a);
    *q=40;
    printf("%d ", a);
    return 0;
}
