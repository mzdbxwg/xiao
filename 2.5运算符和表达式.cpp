//第二章内容

//运算符的分类：
// 一、根据运算性质可分：
// 赋值运算符，算术运算符，增1和减1，类型强转，关系运算符，逻辑运算符，
//位运算符。。。
//二、根据运算所需的对象（操作数个数）可分：
//一元（单目）运算符、二元（双目）运算符、三元（三目）运算符
//c表达式
//操作数：
//	运算对象（常量、变量、函数）
//算术表达式：例如：除法运算：整数除法11/2=2    浮点数除法 11.0/5=2.2
//求余也称a对b取模：a%b 操作数必须是整数，返回相除之后的余数 :11%5=1   11%（-5）=1 （-11）%5=-1
//运算符的优先级--从高到滴运算，优先级相同时，
//结合性：左结合->3*4/2=12/2=6   右结合<-例如：-（-4）=4
//输出一个三位数，分离个位，十位，百位
//153/100=1  
//153-1*100=53 53/10=5 (153%100=53  53/10=5)(153/10=15 15%10=5)
//153%10=3  153-1*100-5*10=3
//随机函数：rand() 生成0~32767之间的随机数
//生成一个指定范围的随机数如1~100  
//（magic = rang() % 100）; //0~99  
//（magic = rang() % 100） + 1;//1~100
//更复杂的数学运算符：e的x次方exp(x)、x的y次方pow(x,y)、x的平方根sqrt(x)、
//x的绝对值fabs(x)、   sin(x)、   cos(x)  
//开头要加上#include <math.h>
	
