#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int coplanarity_check(int* mark);

int vector_sum(int* mark);

int dot_product_of_vectors(int* mark);

int vector_product_of_vectors(int* mark);

int multiplying_a_number_by_a_vector(int* mark);


void vector()
{
	srand(time(NULL));
	cout << "��������, ��� �� ������ �������� � ���������\n\n";
	cout << "� ������ �������� ����� ������������� 5 ������� �� ���� '�������'. " << endl << "������: ������ ��� ������!" << endl;
	system("pause");
	system("cls");

	int count = 1;
	int number_of_exercise = 1;
	int mark = 0;





	coplanarity_check(&mark);

	vector_sum(&mark);

	dot_product_of_vectors(&mark);

	vector_product_of_vectors(&mark);

	multiplying_a_number_by_a_vector(&mark);





	cout << "���� �������: " << mark << endl << endl;
	system("pause");
	system("cls");
}


int coplanarity_check(int* mark)
{
	int x1, x2, x3, y1, y2, y3, z1, z2, z3;
	int A;
	int B;
	int C;
	int opredelitel;
	int answer;

	x1 = rand() % 10;
	x2 = rand() % 10;
	x3 = rand() % 10;
	y1 = rand() % 10;
	y2 = rand() % 10;
	y3 = rand() % 10;
	z1 = rand() % 10;
	z2 = rand() % 10;
	z3 = rand() % 10;

	cout << "���� ��� �������:" << endl;
	cout << "������ a (" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
	cout << "������ b (" << x2 << ", " << y2 << ", " << z2 << ")" << endl;
	cout << "������ c (" << x3 << ", " << y3 << ", " << z3 << ")" << endl;
	cout << "������: �������� �� ��� �������������?(1-��,2-���)" << endl;
	A = (y2 * z3) - (y3 * z2);
	B = (x2 * z3) - (x3 * z2);
	C = (x2 * y3) - (x3 * y2);

	opredelitel = ((x1 * A) - (y1 * B) + (z1 * C));
	cout << endl << endl << opredelitel << endl << endl;

	if (opredelitel == 0)
	{
		opredelitel = 1;
	}
	else
	{
		opredelitel = 2;
	}

	bool inputIsOK = true;
	string choiceInput = "";

	do
	{
		cout << "������� ��� �����: ";
		getline(cin, choiceInput);
		inputIsOK = true;

		try
		{
			if (choiceInput.length() != 1) {
				throw out_of_range("");
			}

			answer = stoi(choiceInput);
			if ((answer < 1) || (answer > 2)) {
				throw out_of_range("");
			}
		}
		catch (...)
		{
			inputIsOK = false;
			cout << "������������ �������" << endl;
		}
	} while (!inputIsOK);


	if ((answer == opredelitel) && ((answer == 1) || (answer == 2)))
	{
		(*(mark)) += 2;
	}

	system("pause");
	system("cls");
	return 0;
}


int vector_sum(int* mark)
{
	int x1, x2, y1, y2, z1, z2;
	int A, Ap;
	int B, Bp;
	int C, Cp;

	int answer;

	x1 = rand() % 10;
	x2 = rand() % 10;
	y1 = rand() % 10;
	y2 = rand() % 10;
	z1 = rand() % 10;
	z2 = rand() % 10;


	cout << "���� ��� �������:" << endl;
	cout << "������ a (" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
	cout << "������ b (" << x2 << ", " << y2 << ", " << z2 << ")" << endl;

	cout << "������: ����� ����� �������� ��������!" << endl;

	A = x1 + x2;
	B = y1 + y2;
	C = z1 + z2;

	cout << "������� ��� �����: " << endl;


	string numberInput;
	bool numberIsPositive = true;

	while (true)
	{
		cout << "X= ";
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

			Ap = stoi(numberInput);
			if (!numberIsPositive) {
				Ap *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}

	while (true)
	{
		cout << "Y= ";
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

			Bp = stoi(numberInput);
			if (!numberIsPositive) {
				Bp *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}


	while (true)
	{
		cout << "Z= ";
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

			Cp = stoi(numberInput);
			if (!numberIsPositive) {
				Cp *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}


	if ((A == Ap) && (B == Bp) && (C == Cp))
	{
		(*(mark)) += 2;
	}

	system("pause");
	system("cls");
	return 0;
}


int dot_product_of_vectors(int* mark)
{
	int x1, x2, y1, y2, z1, z2;
	int product;
	int answer;
	int A, Ap;
	int B, Bp;
	int C, Cp;

	x1 = rand() % 10;
	x2 = rand() % 10;
	y1 = rand() % 10;
	y2 = rand() % 10;
	z1 = rand() % 10;
	z2 = rand() % 10;


	cout << "���� ��� �������:" << endl;
	cout << "������ a (" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
	cout << "������ b (" << x2 << ", " << y2 << ", " << z2 << ")" << endl;

	cout << "������: ����� ��������� ������������ �������� ��������!" << endl;

	product = ((x1 * x2) + (y1 * y2) + (z1 * z2));



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

	if (product == answer)
	{
		(*(mark)) += 2;
	}

	system("pause");
	system("cls");
	return 0;
}

int vector_product_of_vectors(int* mark)
{
	int x1, x2, y1, y2, z1, z2;

	int A, Ap;
	int B, Bp;
	int C, Cp;
	int answer;

	x1 = rand() % 10;
	x2 = rand() % 10;
	y1 = rand() % 10;
	y2 = rand() % 10;
	z1 = rand() % 10;
	z2 = rand() % 10;


	cout << "���� ��� �������:" << endl;
	cout << "������ a (" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
	cout << "������ b (" << x2 << ", " << y2 << ", " << z2 << ")" << endl;

	cout << "������: ����� ��������� ������������ �������� ��������!" << endl;

	A = ((y1 * z2) - (z1 * y2));
	B = ((-1) * ((x1 * z2) - (z1 * x2)));
	C = ((x1 * y2) - (y1 * x2));

	cout << "������� ��� �����: " << endl;

	string numberInput;
	bool numberIsPositive = true;

	while (true)
	{
		cout << "X= ";
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

			Ap = stoi(numberInput);
			if (!numberIsPositive) {
				Ap *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}


	while (true)
	{
		cout << "Y= ";
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

			Bp = stoi(numberInput);
			if (!numberIsPositive) {
				Bp *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}


	while (true)
	{
		cout << "Z= ";
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

			Cp = stoi(numberInput);
			if (!numberIsPositive) {
				Cp *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}

	if ((A == Ap) && (B == Bp) && (C == Cp))
	{
		(*(mark)) += 2;
	}

	system("pause");
	system("cls");
	return 0;
}

int multiplying_a_number_by_a_vector(int* mark)
{
	int x1, y1, z1;

	int A, Ap;
	int B, Bp;
	int C, Cp;

	int number;
	int answer;

	x1 = rand() % 10;
	y1 = rand() % 10;
	z1 = rand() % 10;
	number = rand() % 10;



	cout << "��� ������ 'a' � �����:" << endl;
	cout << "������ a (" << x1 << ", " << y1 << ", " << z1 << ")" << endl;
	cout << "�����: " << number << endl;

	A = x1 * number;
	B = y1 * number;
	C = z1 * number;

	cout << "������: �������� �������� ������ �� �����!" << endl;

	cout << "������� ��� �����: " << endl;

	string numberInput;
	bool numberIsPositive = true;

	while (true)
	{
		cout << "X= ";
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

			Ap = stoi(numberInput);
			if (!numberIsPositive) {
				Ap *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}


	while (true)
	{
		cout << "Y= ";
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

			Bp = stoi(numberInput);
			if (!numberIsPositive) {
				Bp *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}


	while (true)
	{
		cout << "Z= ";
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

			Cp = stoi(numberInput);
			if (!numberIsPositive) {
				Cp *= -1;
			}

			break;
		}
		catch (...) {
			cout << "������������ ����, ���������� ��� ���:\n";

		}
	}

	if ((A == Ap) && (B == Bp) && (C == Cp))
	{
		(*(mark)) += 2;
	}

	system("pause");
	system("cls");

	return 0;
}