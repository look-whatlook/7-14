#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct �ṹ��ؼ���   Stu - �ṹ���ǩ   
//struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����

//typedef struct Stu //��ͬ��� ֵ �ļ���=�Y���w
//{
//	//��Ա����     �D��  ���� ���S���M
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;

//int main()  //
//{
//	int a = 0;
//	char arr[] = "hello bit\n";
//	char* pc = arr;//������ ��һ���ֵ�Ȩ��
//	printf("%s\n", arr);//arr ָ һ�����M ������Ԫ�ص�ַ
//	printf("%p\n", arr); //��Ԫ�ص�ַ
//	//printf("%c\n", arr); // char���� char[11]
//	printf("%c\n", *pc);//ָ� ָһ���ַ� ���M ��ռ���g��ʼ�ط�
//	printf("%s\n", pc);//�ַ���
//	printf("%s\n", pc);//pc arr ��Ķ�����Ԫ�ص�ַ
//	printf("%s\n", arr);//����printf()�õ���Ԫ�ص�ַ ��ӡ��������
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

//typedef struct Stu  //��ͬ���� ֵ �ļ��� ���� ͼֽ  ����
//{
//	//��Ա����
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
//	Stu s = { "����", 40, "15598886688", "��" };
//	//��ӡ�ṹ������
//	//Print1 ��Print2 �ĸ����ã�
//	Print1(s);// 1 ��Ҫ����һ������ ����ѹջ Ӱ������
//	Print2(&s);
//
//	return 0;
//}

//struct �ṹ��ؼ���   Stu - �ṹ���ǩ   
//struct Stu - �ṹ������
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;
//
//typedef struct Stu  //�������� ͼֽ ��ά���� ��ͬ���� ֵ ����
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()  //���������ṹ������ ����
//{
//	Stu s1 = { "����",20,"15249287000","��" };
//	struct Stu s2 = { "����",30,"15596668862","����" };
//	return 0;
//}

//struct S
//{
//	int a ;   //�ĸ�����˵�����͵�
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
	Stu s = { "����",40,"15598886688","��" };
	Print1(s);
	Printf2(&s);
	return 0;
}