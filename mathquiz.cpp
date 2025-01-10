#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));

    int score = 0; 
    char playAgain;

    while (true) {
        
        int num1 = rand() % 1000 + 1;
        int num2 = rand() % 1000 + 1;

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

    }

    cout << "Ваш финальный счет: " << score << endl;

    return 0;
}
