# define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("********    1. play    ***********\n");
	printf("********    0. exit    ***********\n");
	printf("**********************************\n");
}

void game()
{
	char ret = 0;

	//�洢���� - ��ά����
	char board[ROW][COL];

	//��ʼ������2 - ��ʼ���ո�
	InitBoard(board, ROW, COL);

	//��ӡ���� - �����Ǵ�ӡ��������
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
			break;

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}