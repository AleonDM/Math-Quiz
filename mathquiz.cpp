#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));

    int score = 0; 
    char playAgain;

    do {
        
        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;

        char operation;
        if (rand() % 2 == 0) {
            operation = '+'; 
        }
        else {
            operation = '-';
        }
        
        int correctAnswer;
        if (operation == '+') {
            correctAnswer = num1 + num2;
        }
        else {
            correctAnswer = num1 - num2;
        }
        
        cout << "Решите пример: " << num1 << " " << operation << " " << num2 << " = ";

        int playerAnswer;
        cin >> playerAnswer; 

       
        if (playerAnswer == correctAnswer) {
            score++; 
            cout << "Правильно! Ваш текущий счет: " << score << endl;
        }
        else {
            cout << "Неправильно! Правильный ответ: " << correctAnswer << endl;
            cout << "Игра окончена! Ваш счет: " << score << endl;
            break; 
        }
        
        cout << "Хотите продолжить? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Ваш финальный счет: " << score << endl;

    return 0;
}

