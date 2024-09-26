#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_input_error(int user)
{
	return user > 3 || user < 1;
}

int rand_num()
{
	srand((int)time(NULL));
	return rand() % 3 + 1;
}

int play_game(int user, int comp)
{
	if (user == comp)
		return 0;
	else if ((user - comp + 1) % 3 == 0)
		return 1;
	else
		return -1;
}

void print_choices(char **rcp, int user, int comp)
{
	printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", rcp[user - 1], rcp[comp - 1]);
}

void print_winner(int result)
{
	switch (result) {
		case 1:
			printf("이겼습니다.\n");
			break;
		case 0:
			printf("비겼습니다.\n");
			break;
		case -1:
			printf("졌습니다.\n");
			break;
		default:
			break;
	}
}

void count(int result, int *win, int *tie)
{
	if (result == 0)
		(*tie)++;
	else if (result == 1)
		(*win)++;
	else
		return;
}

void print_result(int win, int tie)
{
	printf("게임의 결과: %d승, %d무", win, tie);
}

int main(void)
{
	int user, comp, result, win, tie;
	char *rcp[] = {"바위", "가위", "보"};

	win = 0, tie = 0;
	while (1)
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &user);
		if (is_input_error(user))
		{
			printf("잘못된 입력\n");
			continue;
		}
		comp = rand_num();
		result = play_game(user, comp);
		print_choices(rcp, user, comp);
		print_winner(result);
		if (result == -1)
			break;
		count(result, &win, &tie);
	}
	print_result(win, tie);
	return 0;
}
