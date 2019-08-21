#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N			10000
#define MAXNUMBER	10000

int ChoiceNumber(int Max)
{
	return rand() % Max + 1;
}

int main()
{
	int Numbers[N];

	srand(time(nullptr));

	//자루에 공 만들기
	int RandomNumber[MAXNUMBER];
	for (int i = 0; i < MAXNUMBER; i++)
	{
		RandomNumber[i] = i + 1;
	}

	//공 섞는거
	for (int i = 0; i < MAXNUMBER; i++)
	{
		int first = rand() % MAXNUMBER;
		int second = rand() % MAXNUMBER;
		int Temp = RandomNumber[first];
		RandomNumber[first] = RandomNumber[second];
		RandomNumber[second] = Temp;
	}

	for (int i = 0; i < N; i++)
	{
		Numbers[i] = RandomNumber[i];
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d ", Numbers[i]);
	}


	/*
		//종이에 숫자 적기
		Numbers[0] = ChoiceNumber(MAXNUMNER);
		for (int i = 1; i < N; i++)
		{
			// 새 숫자를 뽑아서 이전에 뽑은 숫자인지 비교, 있는거면 다시 뽑기
			int j = 0;
			while (true)
			{
				bool bCan =  true;
				int NewNumber = ChoiceNumber(MAXNUMNER);

				for (int j = 0; j < i; j++)
				{
					if (Numbers[j] == NewNumber)
					{
						bCan = false;
					}
				}

				if (bCan == true)
				{
					Numbers[i] = NewNumber;
					break;
				}
			}
		}

		for (int i = 0; i < N; i++)
		{
			printf("%d ", Numbers[i]);
		}
	*/
	return 0;
}