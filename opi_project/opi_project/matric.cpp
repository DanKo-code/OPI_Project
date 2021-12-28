#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string>
using namespace std;

int mat33(int* mark, FILE* f, int number_of_exercise);
int mat22(int* mark, FILE* f, int number_of_exercise);

int matric1()
{
	srand(time(NULL));
	cout << "��������, ��� �� ������ ������� ������������ ������ 2�2 � 3�3!\n\n";
	cout << "� ������ �������� ����� ������������� 10 ������." << endl << "������: ����� ������������!" << endl;
	system("pause");
	system("cls");


	int count = 0;
	int mark = 0;
	int number_of_exercise = 1;
	errno_t err;
	FILE* f;
	err = fopen_s(&f, "���������� ������������.txt", "w");

	if (err != 0)
	{
		perror("���������� ������� ����\n");
		return EXIT_FAILURE;
	}

	fprintf(f, "��� ���� � ����������� ������ ������������. ���� ��������� ������� � ������� �� ��������� ������!\n\n");


	for (;;)
	{

		cout << "������� �����: " << number_of_exercise << "\n\n";
		mat33(&mark, f, number_of_exercise);
		number_of_exercise++;


		cout << "������� �����: " << number_of_exercise << "\n\n";
		mat22(&mark, f, number_of_exercise);
		number_of_exercise++;



		count++;
		if (count == 5)
			break;

	}

	cout << "���� �������: " << mark << endl << endl;
	system("pause");
	system("cls");
	fclose(f);
	return 0;
}

int mat33(int* mark, FILE* f, int number_of_exercise)
{

	int opredelitel;
	int a[3][3];
	int A;
	int B;
	int C;
	int answer;


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";

		}

		cout << endl;
	}

	A = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);
	B = (a[1][0] * a[2][2]) - (a[2][0] * a[1][2]);
	C = (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]);

	opredelitel = ((a[0][0] * A) - (a[0][1] * B) + (a[0][2] * C));
	cout << endl << endl << opredelitel << endl << endl;

	string numberInput;
	bool numberIsPositive = true;

	while (true)
	{
		cout << "������� ��� �����: ";
		getline(cin, numberInput);
		numberIsPositive = true;

		try
		{
			if (numberInput[0] == '-')
			{
				numberIsPositive = false;
				numberInput.erase(numberInput.begin());
			}

			for (char ch : numberInput)
			{
				if (!isdigit(ch)) {
					throw invalid_argument("");
				}
			}

			answer = stoi(numberInput);
			if (!numberIsPositive) {
				answer *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}

	if (answer != opredelitel)
	{

		fprintf(f, "������� �����: %d\n", number_of_exercise);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				fprintf(f, "%d  ", a[i][j]);
			}
			fprintf(f, "\n");
		}

		fprintf(f, "���������� �����: %d\n", opredelitel);
		fprintf(f, "��� �����: %d\n", answer);
		fprintf(f, "\n\n");

	}

	if (answer == opredelitel)
	{
		(*(mark))++;
	}
	system("pause");
	system("cls");
	return 0;


}

int mat22(int* mark, FILE* f, int number_of_exercise)
{
	int opredelitel2;
	int answer;
	int b[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			b[i][j] = rand() % 10;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	opredelitel2 = (b[0][0] * b[1][1]) - (b[1][0] * b[0][1]);
	opredelitel2 = (b[0][0] * b[1][1]) - (b[1][0] * b[0][1]);
	cout << endl << endl << opredelitel2 << endl << endl;

	string numberInput;
	bool numberIsPositive = true;

	while (true)
	{
		cout << "������� ��� �����: ";
		getline(cin, numberInput);
		numberIsPositive = true;

		try
		{
			if (numberInput[0] == '-')
			{
				numberIsPositive = false;
				numberInput.erase(numberInput.begin());
			}

			for (char ch : numberInput)
			{
				if (!isdigit(ch)) {
					throw invalid_argument("");
				}
			}

			answer = stoi(numberInput);
			if (!numberIsPositive) {
				answer *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}

	if (answer != opredelitel2)
	{

		fprintf(f, "������� �����: %d\n", number_of_exercise);
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				fprintf(f, "%d  ", b[i][j]);
			}
			fprintf(f, "\n");
		}

		fprintf(f, "���������� �����: %d\n", opredelitel2);
		fprintf(f, "��� �����: %d\n", answer);
		fprintf(f, "\n\n");

	}



	if (answer == opredelitel2)
	{
		(*(mark))++;
	}
	system("pause");
	system("cls");
	return 0;
}