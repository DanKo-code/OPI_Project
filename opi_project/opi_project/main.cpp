#include <iostream>
#include <string>
#include <Windows.h>
#include "matric.h"
#include "equations.h"
#include "operations_on_numbers.h"
#include "vector.h"
#include "operations_middle.h"
#include "operations_hard.h"
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    bool inputIsOK = true;
    string choiceInput = "";

    int choice = 0;


    do
    {
        cout << endl << "��������, � ��� ������ ����������:" << endl
            << "1 - ������������ ������" << endl
            << "2 - ���������� ���������" << endl
            << "3 - ������ ����" << endl
            << "4 - �������" << endl
            << "5 - ������� ���� �������" << endl
            << "6 - ����� �� ���������" << endl
            << "�� ������� �������� ��� �������: ";

        do
        {
            getline(cin, choiceInput);
            inputIsOK = true;

            try
            {
                if (choiceInput.length() != 1) {
                    throw out_of_range("");
                }

                choice = stoi(choiceInput);
                if ((choice < 1) || (choice > 6)) {
                    throw out_of_range("");
                }
            }
            catch (...)
            {
                inputIsOK = false;
                cout << "������������ �������,������� ��� ���: ";
            }
        } while (!inputIsOK);

        switch (choice)
        {
        case 1:
        {
            matric1();

            system("pause");
            system("cls");
            continue;
        }

        case 2:
        {
            equation1();
            system("pause");
            system("cls");
            continue;
        }

        case 3:
        {
            do
            {
                system("cls");
                cout << "�������� ������� ���������:\n 1 - ������\n 2 - �������\n 3 - �������\n 4 - ����� � ������� ����\n"
                    "�� ������� �������� ��� �������: ";


                do
                {
                    getline(cin, choiceInput);
                    inputIsOK = true;
                    try
                    {
                        if (choiceInput.length() != 1)
                        {
                            throw out_of_range("");
                        }

                        choice = stoi(choiceInput);
                        if ((choice < 1) || (choice > 4))
                        {
                            throw out_of_range("");
                        }
                    }
                    catch (...)
                    {
                        inputIsOK = false;
                        cout << "������������ �������, ������� ��� ���: ";
                    }
                } while (!inputIsOK);
                switch (choice) {
                case 1:
                {
                    operations();
                    system("pause");
                    system("cls");
                    continue;
                }
                case 2:
                {
                    operations_middle();
                    system("pause");
                    system("cls");
                    continue;
                }
                case 3:
                {
                    operations_hard();
                    system("pause");
                    system("cls");
                    continue;
                }

                case 4:
                {
                    system("cls");
                    break;
                }

                }
            } while (choice != 4);
            continue;
        }

        case 4:
        {

            vector();
            system("pause");
            system("cls");
            continue;
        }

        case 5:
        {

            ShellExecuteA(GetConsoleWindow(), "open", "file:///C:/Users/ROG/Desktop/OPI%20project%20HTML/Untitled-1.html", NULL, NULL, SW_SHOWDEFAULT);
            system("pause");
            system("cls");
            continue;
        }


        case 6:
        {

            break;
        }
        cout << endl << endl;
        }
    } while (choice != 6);

    return 0;
}