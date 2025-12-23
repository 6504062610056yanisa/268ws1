#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, max2;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    int max = (n1 > n2) ? ((n1 > n3) ? ((n1 > n4) ? n1 : n4)
                                     : ((n3 > n4) ? n3 : n4))
                        : ((n2 > n3) ? ((n2 > n4) ? n2 : n4)
                                     : ((n3 > n4) ? n3 : n4));

    if (n1 == max)
        max2 = (n2 > n3) ? ((n2 > n4) ? n2 : n4)
                         : ((n3 > n4) ? n3 : n4);
    else if (n2 == max)
        max2 = (n1 > n3) ? ((n1 > n4) ? n1 : n4)
                         : ((n3 > n4) ? n3 : n4);
    else if (n3 == max)
        max2 = (n1 > n2) ? ((n1 > n4) ? n1 : n4)
                         : ((n2 > n4) ? n2 : n4);
    else
        max2 = (n1 > n2) ? ((n1 > n3) ? n1 : n3)
                         : ((n2 > n3) ? n2 : n3);
    printf("secondmax of %d and %d and %d and %d is %d", n1, n2, n3, max, max2);
}