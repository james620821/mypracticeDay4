#include <stdio.h>
int main()
{
    /* �v��5-1����ܼƨD�̤j��
    int num1, num2;
    printf("Please enter the first integer: ");
    scanf("%d", &num1);
    printf("Please enter the second integer: ");
    scanf("%d", &num2);
    /*
    //int max;
    //max = num1;
    //if (max < b)
    //{
    //    max = b;
    //}
    //printf("The maxinum is %d.\n", max);
    if ( num1-num2 > 0)
    {
        printf("The maxinum is %d.\n", num1);
    }
    else
    {
        printf("The maxinum is %d.\n", num2);
    }
    */
    //�v��5-2 ��T���ܼƨD�̤j��
    /*
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("The maxinum is %d", max);
    */
    //�v��5-3 ��|���ܼƨD�̤j��
    /*
    int a, b, c, d, max;
    printf("Please enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    printf("The maxinum is %d", max);
    */
    //�D�̤p�ȻP�D�̤j�ȷ����ۦP

    //�v��5-5��T���ܼƨD����� (���n)

    int a, b, c, temp;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
       temp = b;
       b =  a;
       a = temp;
    }
    if (b > c)
    {
       temp = c;
       c =  b;
       b = temp;
    }
    if (a > b)
    {
       temp = b;
       b =  a;
       a = temp;
    }
    printf("The maximun is %d\n", c);
    printf("The median is %d\n", b);
    printf("The minimum is %d\n", a);
    return 0;
}
