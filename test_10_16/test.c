#include <stdio.h>

/* 描述
KiKi想知道从键盘输入的两个数的大小关系，请编程实现。
输入描述：
题目有多组输入数据，每一行输入两个整数（范围-231~231-1），用空格分隔。
输出描述：
针对每行输入，输出两个整数及其大小关系，数字和关系运算符之间没有空格，详见输入输出样例。 */

/* int main()
{
    int a=0;
    int b=0; 
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("%d>%d\n", a, b);
    }
    if (a < b)
    {
        printf("%d<%d\n", a, b);
    }
    if(a == b)
    {
        printf("%d=%d\n", a, b);
    }
    
    return 0;
} */


/* 描述
判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。
输入描述：
输入包括一个整数M（1≤M≤100,000）。
输出描述：
输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。 */

/*  int main()
{
    int m = 0;
    scanf("%d", &m);
    if(m%5 == 0)
    {
        printf("%s\n", "YES");
    }
    else
    {
        printf("%s\n", "NO");
    }
    return 0;
}*/


/* 描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。

输入描述：
多组输入，一个整数（1~100），表示线段长度，即“*”的数量。
输出描述：
针对每行输入，输出占一行，用“*”组成的对应长度的线段。 */

int main()
{
    int m = 0;
    scanf("%d", &m);
    int i = 0;
    {
        for(i = 0; i < m; i++);
    {
        printf("*");
    }
    }
    
    
    return 0;
}