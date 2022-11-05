# define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("*****************************************\n");
	printf("**********        1.play       **********\n");
	printf("**********        0.exit       **********\n");
	printf("*****************************************\n");
}

void game()
{
	char ret = 0;

	char board[ROW][COL];

	//初始化棋盘
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;

		//电脑下棋
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
	}

	if (ret == '*')
	{
		printf("玩家胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
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
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}