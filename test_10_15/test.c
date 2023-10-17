#include<stdio.h>


/* 描述
给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
输入描述：
一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。 */

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int m, n;
    m = a / b;
    n = a % b;
    printf("%d %d", m, n);

    return 0;
}


/* 描述
据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
输入描述：
多组输入，每行输入包括一个整数表示的智商。
针对每行输入，输出“Genius”。 */

int main()
{
    int m = 0;
    scanf("%d", &m);
    if (m >= 140)
    printf("%s\n", "Genius");
    else
    printf("%s\n", "You are great enough");


    return 0;
}