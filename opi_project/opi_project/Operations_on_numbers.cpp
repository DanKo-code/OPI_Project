#include "operations_on_numbers.h"
#include <iostream>
#include <string>
using namespace std;


void operations()
{
    int number = 0;
    string numberInput = "";
    bool numberIsPositive = true;
    srand(time(0));
    cout << "\n�� ������� ������ ������� ���������.\n";
    cout << "��������, ��� �� ������ ������ �������!\n\n";
    cout << "��� ����� ������������ 10 �������� �� ������ ����." << endl << "������: ������ ��!" << endl;
    system("pause");
    system("cls");
    int const size = 5, exercises = 10; int count = 1;
    int arr[size], right_answer, answer_from_user, quality_of_right_answers = 0;
    for (int n = 0; n < exercises; n++) {
        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 10;
        }

        right_answer = arr[0] + arr[3] * arr[2] - arr[1] * arr[4];

        cout << "����� �������: " << count << endl << endl;
        count++;
        cout << arr[0] << "+" << arr[3] << "*" << arr[2] << "-" << arr[1] << "*" << arr[4] << "= ? " << endl;
        cout << "������� ��� �����: ";
        while (true)
        {
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

                number = stoi(numberInput);
                if (!numberIsPositive) {
                    number *= -1;
                }

                break;
            }
            catch (...) {
                cout << " ������������ ����. ���������� ��� ���: ";
            }
        }
        if (right_answer == number) {
            quality_of_right_answers++;
            cout << "�����!\n";
        }
        else {
            cout << "�������!\n";
        }
        system("pause");
        system("cls");
    }
    cout << "���������� ����� �������� ���� ��������: " << quality_of_right_answers << endl;
}




