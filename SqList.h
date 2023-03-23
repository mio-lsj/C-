# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

//静态数据表
//typedef struct SqList
//{
//	int a[N];
//	int size;//表示数组中存储了多少个有效数据
//}SL;

typedef struct SqList
{
	SLDataType* a;
	int size;//表示存储了多少个数据
	int capacity;//实际能存储数据的空间容量
}SL;

//接口函数
void SqListPint(SL* ps);
void SqListInit(SL* ps);
void SqListDestory(SL* ps);
void SqListDestoryCapacity(SL* ps);
void SqListPushBack(SL* ps, SLDataType x);
void SqListPopBack(SL* ps);
void SqListPushfront(SL* ps, SLDataType x);
void SqListPopFront(SL* ps);

//找到了返回x位置下标，没有找到返回-1
int SqListFind(SL* ps, SLDataType x);
//制定pos下标位置插入
void SeListInsert(SL* ps, int pos, SLDataType x);
//删除pos位置的数据
void SqListErase(SL* ps, int pos);


