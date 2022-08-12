/*常量与变量*/
#include <stdio.h>//引用头文件
#define PI 3  //PI就是符号常量
int main()//main是标识符
{
    int a = 3;/*a就是一个变量, 变量名和标识符的命名规范完全相同。只能有数字、
            字母和下画线等八个字符组成，且第一个不能是数字，区分大、小写,不能与关键字相同*/
    a = 5;
    printf("%d\n", PI);//PI=10；//符号常量不可以赋值
    int age = 15;
    int    height = 162;//int 用于整数字符存贮
    double weight = 82.5;//fload（单精度浮点型） 用于存贮小数，double（双精度浮点型）用于存贮更多位数的小数
    char isfat = 'y';//char 用于单个字符存贮
    printf("年龄：%d 岁\n", age);//%d带符号十进制
    printf("体重：%f KG\n", weight);//%f六位小数
    printf("身高：%d CM\n", height);
    printf("是否属于肥胖儿童：%c\n", isfat);//%c单个字符,%s字符串
    system("pause");
    return 0;
}              //以下学习内容就接第一章1.3scanf的应用
