//Instegration space 

#include <iostream>
#include <cmath>

//=========-------==========

//-= -= -= -= -= -= -= -= -= -= -
using namespace std;
//-= -= -= -= -= -= -= -= -= -= -





/////////// ~ exercise - 9


//int main() {
//
//    char ch;
//
//    // Enter Symbol
//    cout << "Enter Symbol : ";
//    cin >> ch;
//
//    // ასოების გარდაქმნა დაბალ რეგისტრში
//    ch = tolower(ch);
//
//    // სიმბოლოს ტიპი
//    switch (ch) {
//    case 'a':
//    case 'e':
//    case 'i':
//    case 'o':
//    case 'u':
//        cout << "This is a vowel letter." << endl;
//        break;
//    case 'y':
//    case 'w':
//        cout << "This is a semivowel letter.." << endl;
//        break;
//    default:
//        // Проверка, является ли символ буквой
//        if ((ch >= 'a' && ch <= 'z')) {
//            cout << "This is a different letter." << endl;
//        }
//        else {
//            cout << "This is not a letter. . . ." << endl;
//        }
//        break;
//    }
//
//    return 0;
//}
//


/////////// ~ exercise - 10

//int main() {
//    int number;
//
//    // Enter Number
//    cout << "Enter Number : ";
//    cin >> number;
//
//    // Defining and displaying a message
//    if (number >= 1 && number <= 4) {
//        cout << "Number less than 5 " << endl;
//    }
//    else if (number == 5) {
//        cout << "The number is 5 " << endl;
//    }
//    else {
//        cout << "Number greater than 5 " << endl;
//    }
//
//    return 0;
//}


/////////// ~ exercise - 11



int main() {
    int num1, num2;
    char operation;

    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Seocnd Number : ";
    cin >> num2;

    cout << "Enter the operation symbol (+, -, *, /, %) : ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "Result : " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result : " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result :" << num1 * num2 << endl;         
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result : "<< num1 / num2 << endl;
        }
        else {
            cout << "Division by zero is impossible!" << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            cout << "Result : " << num1 % num2 << endl;
        }
        else {
            cout << "Division by zero is impossible!" << endl;
        }
        break;
    default:
        cout << "This is an incorrect operation!" << endl;
        break;
    }

    return 0;
}
