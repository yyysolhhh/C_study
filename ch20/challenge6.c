#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

typedef struct s_result
{
	int strike;
	int ball;
} t_result;

void init_comp(int *comp)
{
	for (int i = 0; i < 10; i++)
		comp[i] = -1;
}

int rand_num()
{
	return rand() % 9;
}

void select_nums(int *comp)
{
	int n;
	int i = 0;

	srand((int)time(NULL));
	while (i < SIZE)
	{
		n = rand_num();
		//printf("%d ", n); // TODO
		if (comp[n] == -1)
		{
			comp[n] = i;
			i++;
		}
	}
}

void guess_nums(int *user)
{
	printf("3개의 숫자 선택: ");
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &user[i]);
	}
}

t_result check_ans(int *user, int *comp)
{
	int n;
	t_result res = {0, 0};

	for (int i = 0; i < SIZE; i++)
	{
		n = user[i];
		if (comp[n] == i)
		{
			res.strike++;
		}
		else if (comp[n] >= 0)
		{
			res.ball++;
		}
	}
	return res;
}

void print_res(t_result res, int cnt)
{
	printf("%d번째 도전 결과: %dstrike, %dball!\n\n", cnt, res.strike, res.ball);
}

int main(void)
{
	int comp[10];
	int user[SIZE];
	int cnt = 1;
	t_result res;

	init_comp(comp);
	select_nums(comp);
	while (1)
	{
		guess_nums(user);
		res = check_ans(user, comp);
		print_res(res, cnt);
		if (res.strike == SIZE)
		{
			printf("Game End!");
			break;
		}
		cnt++;
	}
	return 0;
}

/*
 * 예외처리 할 것
 * - 입력 초과해서 받았을 때
 * - 중복된 숫자 입력일때 strike, ball 개수 중복 카운트
 */
