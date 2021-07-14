#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct 结构体关键字   Stu - 结构体标签   
//struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3 是三个全局的结构体变量

//typedef struct Stu //不同類型 值 的集合=結構體
//{
//	//成员变量     圖紙  房子 三維數組
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;

//int main()  //
//{
//	int a = 0;
//	char arr[] = "hello bit\n";
//	char* pc = arr;//解引用 動一個字的权力
//	printf("%s\n", arr);//arr 指 一個數組 不是首元素地址
//	printf("%p\n", arr); //首元素地址
//	//printf("%c\n", arr); // char类型 char[11]
//	printf("%c\n", *pc);//指針 指一個字符 數組 所占空間起始地方
//	printf("%s\n", pc);//字符串
//	printf("%s\n", pc);//pc arr 存的都是首元素地址
//	printf("%s\n", arr);//但是printf()拿到首元素地址 打印整个数组
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {100, 'w', "hello world", 3.14}, arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//
//
//	return 0;
//}

//typedef struct Stu  //不同类型 值 的集合 数组 图纸  类似
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age : %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex : %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四", 40, "15598886688", "男" };
//	//打印结构体数据
//	//Print1 和Print2 哪个更好？
//	Print1(s);// 1 需要拷贝一份数据 参数压栈 影响性能
//	Print2(&s);
//
//	return 0;
//}

//struct 结构体关键字   Stu - 结构体标签   
//struct Stu - 结构体类型
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;
//
//typedef struct Stu  //定义类型 图纸 三维数组 不同类型 值 集合
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()  //创建俩个结构体类型 变量
//{
//	Stu s1 = { "张三",20,"15249287000","男" };
//	struct Stu s2 = { "旺财",30,"15596668862","保密" };
//	return 0;
//}

//struct S
//{
//	int a ;   //四个都是说明类型的
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);// hehe
//	printf("%s\n", t.s.arr);//hello word
//	printf("%lf\n", t.s.d); //3.14
//	printf("%s\n", t.pc);  //hello bit
//	return 0;
//} 

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Printf2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",40,"15598886688","男" };
	Print1(s);
	Printf2(&s);
	return 0;
}