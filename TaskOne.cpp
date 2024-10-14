//Instegration space 

#include <iostream>
#include <cmath>
#include <string>
//#include <locale> // არ მუშაობს
//#include <codecvt>  // არ მუშაობს
#include < windows.h>
#include <vector>

//=========-------==========

//-= -= -= -= -= -= -= -= -= -= -
using namespace std;
//-= -= -= -= -= -= -= -= -= -= -


                                                          // Home Tasks //


/////////// ~ exercise - 1

//string getMonthName(int month) {
//    const string months[] = {
//        "Jenuary", "February", "March", "April", "May", "Jun",
//        "July", "August", "September", "OCtober", "November", "December"
//    };
//
//    if (month >= 1 && month <= 12) {
//        return months[month - 1];
//    }
//    else {
//        return "Do not correspond to the numbers of the months . . . ";
//    }
//}

//int main() {
//    ///////////////locale::global(locale("en_us.UTF-8"));
//    ////////////////////cout.imbue(locale());
//
//    int monthNumber;
//    cout << "Enter the month number: ";
//    cin >> monthNumber;
//
//    string monthName = getMonthName(monthNumber);
//    cout << monthName << std::endl;
//
//    return 0;
//}



/////////// ~ exercise - 2



//void printNumberName(int number) {
//    switch (number) {
//    case 0:
//        cout << "The number entered is . . . \n";
//        cout << "Zero" << std::endl;
//        break;
//    case 1:
//        cout << "The number entered is . . . \n";
//        cout << "One " << std::endl;
//        break;
//    case 2:
//        cout << "The number entered is . . . \n";
//        cout << "Two" << std::endl;
//        break;
//    case 3:
//        cout << "The number entered is . . . \n";
//        cout << "Three" << std::endl;
//        break;
//    case 4:
//        cout << "The number entered is . . . \n";
//        cout << "Four" << std::endl;
//        break;
//    case 5:
//        cout << "The number entered is . . . \n";
//        cout << "Five" << std::endl;
//        break;
//    case 6:
//        cout << "TThe number entered is . . . \n";
//        cout << "Six" << std::endl;
//        break;
//    case 7:
//        cout << "The number entered is . . . \n";
//        cout << "Seven" << std::endl;
//        break;
//    case 8:
//        cout << "The number entered is . . . \n";
//        cout << "Eight" << std::endl;
//        break;
//    case 9:
//        cout << "The number entered is . . . \n";
//        cout << "Nine" << std::endl;
//        break;
//    default:
//        cout << "This is not a Number! \n";
//        cout << "Please, try again . . . \n\n";
//        cout << "Numbers are from 0 to 9, so enter numbers in the range from 0 to including 9. \n\n";
//        cout << "----------------------------------------------------------------------------------";
//        break;
//    }
//}
//
//int main() {
//    int number;
//    cout << "Enter Number: ";
//    cin >> number;
//    cout << "\n";
//
//    if (cin.fail()) {
//        cout << "This is not a number . . . " << std::endl;
//    }
//    else {
//        printNumberName(number);
//    }
//
//    return 0;
//}
//

/////////// ~ exercise - 3


//void printColor(char symbol) {
//    switch (symbol) {
//    case 'r':
//        cout << "Color :: ---> Red" << std::endl;
//        break;
//    case 'g':
//        cout << "Color :: ---> Green" << std::endl;
//        break;
//    case 'y':
//        cout << "Color :: ---> Yellow" << std::endl;
//        break;
//    case 'p':
//        cout << "Color :: ---> Pink" << std::endl;
//        break;
//    case 'p*':
//        cout << "Color :: ---> Purple" << std::endl;
//        break;
//    case 'b':
//        cout << "Color :: ---> Black" << std::endl;
//        break;
//    case 'w':
//        cout << "Color :: ---> White" << std::endl;
//        break;
//    case 'b*':
//        cout << "Color :: ---> Blue" << std::endl;
//        break;
//    case 's':
//        cout << "Color :: ---> Sky blue" << std::endl;
//        break;
//    case 'g*':
//        cout << "Color :: ---> Gray" << std::endl;
//        break;
//    default:
//        cout << "Similar color not found in the catalog, try choosing another color from the proposed catalog." << endl;
//        break;
//    }
//}
//
//int main() {
//    char inputSymbol;
//    cout << "Applied information about color indices offered by the program . . . \n\n ";
//    cout << " Green - Index --> ( g )\n\n";
//    cout << " Blue - Index --> ( b* )\n\n";
//    cout << " Yellow - Index --> ( y )\n\n";
//    cout << " Gray- Index --> ( g* )\n\n";
//    cout << " Pink - Index --> ( p )\n\n";
//    cout << " Purple - Index --> ( p* )\n\n";
//    cout << " White - Index --> ( w )\n\n";
//    cout << " Black - Index --> ( b )\n\n";
//    cout << " Sky blue - Index --> ( s )\n\n";
//    cout << " Red - Index --> ( r )\n\n";
//    cout << "Enter Index of a color : ";
//    cin >> inputSymbol;
//
//    printColor(inputSymbol);
//}


/////////// ~ exercise - 4


//int main() {
//    double length, width;
//    char choice;
//
//    // მართკუთხედის გვერდები
//    cout << "Enter the length of the rectangle: "; cin >> length;
//    cout << "Enter the width of the rectangle: "; cin >> width;
//
//    // სიმბოლო მოქმედების შესარჩევად
//    cout << "Enter symbol (S for area, P for perimeter) : ";
//    cin >> choice;
//
//    switch (choice) {
//    case 'S':
//    case 's':
//        cout << "Area of ​​a rectangle  =  " << length * width << endl;
//        break;
//    case 'P':
//    case 'p':
//        cout << "Perimeter of a rectangle =  " << 2 * (length + width) << endl;
//        break;
//    default:
//        cout << "Bye bye!" << endl;
//    }
//
//    return 0;
//}
//

/////////// ~ exercise - 5


//int main() {
//    double radius;
//    double Pi = 3.14159;
//    char choice;
//
//    // Enter circle radius
//    cout << "Enter circle radius : ";
//    cin >> radius;
//
//    // Enter a symbol to select an action
//    cout << "Enter symbol (S for area, L for circumference) : "; cin >> choice;
//
//    switch (choice) {
//    case 'S':
//    case 's':
//        cout << "Area of ​​a circle = " << Pi * radius * radius << endl;
//        break;
//    case 'L':
//    case 'l':
//        cout << "Circumference = " << 2 * Pi * radius << endl;
//        break;
//    default:
//        break;
//    }
//
//    return 0;
//}
//

/////////// ~ exercise - 6



//int main() {
//    int num1, num2;
//
//    //ორი მთელი რიცხვის შეტანა
//    cout << "Enter First Number : "; cin >> num1;
//    cout << "Enter Second Number : "; cin >> num2;
//
//    // ვამოწმებთ რჩება თუ არა ნაშთი.
//    if (num1 % num2 == 0) {
//        cout << "!" << endl;  // თუ ის იყოფა, ვბეჭდავთ '!'
//    }
//    // იმის შემოწმება, ტოვებს თუ არა გაყოფა ნაშთს
//    else if (num1 % num2 == 1) {
//        cout << "?" << endl;  // თუ ნაშთი არის 1, დაბეჭდეთ '?'
//    }
//    // დანარჩენ შემთვევებში . . . 
//    else {
//        cout << "*" << endl;  // სხვა შემთხვევაში ვბეჭდავთ '*'
//    }
//
//    return 0;
//}
//

/////////// ~ exercise - 7


//int main() {
//    char symbol;
//
//    // Enter Symbols : 
//    cout << "Enter arithmetical symbol : "; cin >> symbol;
//    cout << "\n";
//
//    // We define and display the name of the arithmetic operation.
//    switch (symbol) {
//    case '+':
//        cout << "The entered symbol is . . . Plus " << endl;
//        break;
//    case '-':
//        cout << "The entered symbol is . . . minus " << endl;
//        break;
//    case '*':
//        cout << "The entered symbol is . . . multiplication" << endl;
//        break;
//    case '/':
//        cout << "The entered symbol is . . . division" << endl;
//        break;
//    case '=':
//        cout << "The entered symbol is . . . equality" << endl;
//        break;
//    default:
//        cout << "This is not an arithmetic operation . . .  \n" << endl;
//        cout << "Please, try again! \n" << endl;
//        cout << "The console you are in executes commands of the language - C++, arithmetic symbols look like this: +; -; *; / . . . " << endl;
//
//
//        break;
//    }
//
// 
// 
//    return 0;
//}


/////////// ~ exercise - 8

////8.	დაწერეთ პროგრამა, რომელიც იქნება ერთგვარი ცნობარი თქვენი ფა¬კულ¬-ტეტის კურსების მიხედვით ჯგუფის ნომრების ჩამონათვალის გა-მოსატანად. კერძოდ, მომხმარებელმა კლავიატურიდან უნდა შეიტანოს კურ¬სის შესაბამისი ციფრი და კონსოლზე უნდა გამოვიდეს ამ კურსზე არ-სებული ჯგუფების შესაბამისი ნომრები, მაგალითად, შემდეგი სახით:
//თუ კლავიატურიდან შევიტანთ ციფრს 1 - ს, ეკრანზე უნდა გამოვიდეს
//პირველი კურსის ჯგუფები : . . . . 
//ანალოგიურად სხვა კურსებზე.


//int main() {
//    int courseNumber;
//    vector<vector<string>> groups = {
//        {"108434-1", "108434-2", "108642", "108643", "108644"}, // Группы 1 курса
//        {"208650", "208651", "208652", "208653", "208654"}, // Группы 2 курса
//        {"308660", "308661", "308662", "308663", "308664"}, // Группы 3 курса
//        {"408670", "408671", "408672", "408673", "408674"}  // Группы 4 курса
//    };
//
//    cout << "Enter course number (1-4) : \n"; cin >> courseNumber;
//
//    if (courseNumber >= 1 && courseNumber <= 4) {
//        cout << "Course groups " << courseNumber << ": ";
//        for (const string& group : groups[courseNumber - 1]) {
//            cout << group << " ";
//        }
//        cout << endl;
//    }
//    else {
//        cout << "Invalid course number. Please enter a number between 1 and 4." << endl;
//    }
//
//
//
//    return 0;
//}


