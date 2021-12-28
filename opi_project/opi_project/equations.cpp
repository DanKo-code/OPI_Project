#include <iostream>
#include <string>
using namespace std;
void equation1()
{
    string numberInput = "";
    bool numberIsPositive = true;


    int right_root1 = 2, right_root2 = 5, root1_from_user, root2_from_user;


    float quality_of_right_answers = 0;
    cout << "\n\nПроверим, как вы умеете решать квадратные уравнения!\n";
    cout << "Вашему вниманию будет представлено 10 квадратных уравнений." << endl << "ЗАДАЧА: решить их!\n\n" << endl;
    system("pause");
    system("cls");


    cout << "x^2-7*x+10=0\n";
    cout << "Ваш ответ:\n";


    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }

    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }

    system("pause");
    system("cls");


    right_root1 = -1, right_root2 = 16;
    cout << "x^2-15*x-16=0\n";
    cout << "Ваш ответ:\n";

    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }

    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if ((root1_from_user == right_root1 or root2_from_user == right_root2) or (root1_from_user == right_root2 or root2_from_user == right_root1)) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!\n";
    }
    system("pause");
    system("cls");


    right_root1 = -13, right_root2 = 3;
    cout << "x^2+10*x-39=0\n";
    cout << "Ваш ответ:\n";


    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }

    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");


    right_root1 = -9, right_root2 = -7;
    cout << "x^2+16*x+63=0\n";
    cout << "Ваш ответ:\n";

    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }

    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }

    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");


    right_root1 = -3, right_root2 = 5;
    cout << "x^2-2*x-15=0\n";
    cout << "Ваш ответ:\n";


    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");


    right_root1 = 2, right_root2 = 4;
    cout << "x^2-6*x+8=0\n";
    cout << "Ваш ответ:\n";


    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");


    right_root1 = -2, right_root2 = 12;
    cout << "x^2-10*x-24=0\n";
    cout << "Ваш ответ:\n";

    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");


    right_root1 = 2, right_root2 = 1;
    cout << "x^2-3*x+2=0\n";
    cout << "Ваш ответ:\n";


    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");

    right_root1 = -3, right_root2 = -5;
    cout << "x^2+8*x+15=0\n";
    cout << "Ваш ответ:\n";



    while (true)
    {
        cout << "x1= ";
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

            root1_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root1_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }



    while (true)
    {
        cout << "x2= ";
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

            root2_from_user = stoi(numberInput);
            if (!numberIsPositive) {
                root2_from_user *= -1;
            }

            break;
        }
        catch (...) {
            cout << " Некорректный ввод. Попробуйте еще раз: ";
        }
    }


    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");

    right_root1 = -3, right_root2 = 6;
    cout << "x^2-3*x-18=0\n";
    cout << "Ваш ответ:\n";
    cout << "x1= "; cin >> root1_from_user;
    cout << "x2= "; cin >> root2_from_user;
    if ((root1_from_user == right_root1 and root2_from_user == right_root2) or (root2_from_user == right_root1 and root1_from_user == right_root2)) {
        quality_of_right_answers++;
    }
    else if (root1_from_user == right_root1 or root2_from_user == right_root2 or root1_from_user == right_root2 or root2_from_user == right_root1) {
        quality_of_right_answers += 0.5;
    }
    else {
        cout << "Некорректный ввод!";
    }
    system("pause");
    system("cls");
    cout << "Количество набранных очков: " << quality_of_right_answers;
}
