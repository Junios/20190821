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

	//�ڷ翡 �� �����
	int RandomNumber[MAXNUMBER];
	for (int i = 0; i < MAXNUMBER; i++)
	{
		RandomNumber[i] = i + 1;
	}

	//�� ���°�
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
		//���̿� ���� ����
		Numbers[0] = ChoiceNumber(MAXNUMNER);
		for (int i = 1; i < N; i++)
		{
			// �� ���ڸ� �̾Ƽ� ������ ���� �������� ��, �ִ°Ÿ� �ٽ� �̱�
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