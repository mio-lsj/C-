# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

//��̬���ݱ�
//typedef struct SqList
//{
//	int a[N];
//	int size;//��ʾ�����д洢�˶��ٸ���Ч����
//}SL;

typedef struct SqList
{
	SLDataType* a;
	int size;//��ʾ�洢�˶��ٸ�����
	int capacity;//ʵ���ܴ洢���ݵĿռ�����
}SL;

//�ӿں���
void SqListPint(SL* ps);
void SqListInit(SL* ps);
void SqListDestory(SL* ps);
void SqListDestoryCapacity(SL* ps);
void SqListPushBack(SL* ps, SLDataType x);
void SqListPopBack(SL* ps);
void SqListPushfront(SL* ps, SLDataType x);
void SqListPopFront(SL* ps);

//�ҵ��˷���xλ���±꣬û���ҵ�����-1
int SqListFind(SL* ps, SLDataType x);
//�ƶ�pos�±�λ�ò���
void SeListInsert(SL* ps, int pos, SLDataType x);
//ɾ��posλ�õ�����
void SqListErase(SL* ps, int pos);


