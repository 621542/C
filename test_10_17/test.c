#include <stdio.h>


/* 描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。

输入描述：
多组输入，一个整数（1~100），表示线段长度，即“*”的数量。
输出描述： 
针对每行输入，输出占一行，用“*”组成的对应长度的线段。 */

/* int main()
{
    int num = 0;
    while(scanf("%d", &num) != EOF)
    {
        while(num > 0)
    {
        printf("*");
        num--;
    }
    printf("\n");
    }
    return 0;
} */


//写一个代码打印1-100之间所有3的倍数的数字

/* int main()
{
    int m = 1;
    for(m = 1; m <= 100; m++)
    if(m % 3 == 0)
    printf("%d ", m);
    return 0;
} */


//写代码将三个整数数按从大到小输出。

/* int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b)
    {
        int num = a;
        a = b;
        b = num;
    }
    if(a < c)
    {
        int num = a;
        a = c;
        c = num;
    }
    if(b < c)
    {
        int num = b;
        b = c;
        c = num;
    }
    printf("%d %d %d", a, b, c);
    return 0;
} */


/* int main() {
	int x = 3;
	int y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
} */


/* 描述
KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
输入描述：
题目有多组输入数据，每一行输入三个a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔。
输出描述：
针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，
其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。 */
/* int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if(a + b - c > 0 && a - b - c < 0)
        {
            if(a == b && b == c)
            printf("Equilateral triangle!\n");
            if(a == b || a == c || b == c)
            printf("Isosceles triangle!\n");
            else
            printf("Ordinary triangle!\n");
        }
        else
        printf("Not a triangle!\n");
    }
    
    return 0;
} */


//乘法口诀表

/* int main()
{
    int i = 1;
    int j = 1;
    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            printf("%d * %d = %d  ", i, j, i * j);
            if(i == j)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
} */


//求10 个整数中最大值

/* int main()
{
    int a[10], max;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            i++;
        }

    }
    printf("%d", max);
    

    return 0;
} */


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

/* int main()
{
    float a = 0, sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        a = 1.0/i;
    if(i % 2  == 1)
    sum += a;
    else
    sum -= a;
    }
    printf("%f", sum);
    return 0;
} */


//打印1000年到2000年之间的闰年

/* int main()
{
    int i = 1000;
    while(i <=2000)
    {
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        printf("%d  ", i);
        i = i + 1;
    }
    return 0;
} */


//编写程序数一下 1到 100 的所有整数中出现多少个数字9

int main()
{
    int i = 1, count = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 10 == 9)
        count++;
        if(i / 10 == 9)
        count++;
    }
    printf("%d", count);
    return 0;
}