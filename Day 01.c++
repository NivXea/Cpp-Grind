//Boiler Plate Code For C++ Programs
#include <iostream>
using namespace std;

int main() {
    return 0;
}

Quite Similar to C
____________________________________________________________________________________________________________________________________________________________________________________________
// Basic I/O
For Output(show in console):
cout << "Hello, World!";

For Input
1. cin << variable_name; --> Best for 1 word inputs 

2. getline(cin , variable_name, delimiter) --> To store multiple Words till the user presses enter or until delimiter appears

For Ex:
#include <string>
int main(){
string name1 , name2;
    //Name1
    cout << "Enter your name: ";
    getline(cin , name1);

    //Name2
    cout << "Enter your name: ";
    cin >> name2;
    
    cout << name1 + "\n";
    cout << name2;
    return 0;
}

Output:
-------------------------------------------------------------------------------------
Enter your name: AKshay Singh
Enter your name: Akshay Singh
AKshay Singh --> getline() stored the entire line
Akshay       --> cin stored the first word
--------------------------------------------------------------------------------------
So NOTE: Whenever Dealing With Multi-Word Inputs, use getline() and when dealing with Int, float etc, use cin >>
______________________________________________________________________________________________________________________________________________________________________________________________
// Band Name Generator Project
#include <iostream>
#include <string>
using namespace std;

int main() {
    string city , pet_name;
    cout << "Welcome To The Band Name Generator!";
    cout << "\nWhere Did You Grew Up: ";
    getline(cin , city);
    cout << "Enter The Name Of Your Pet: ";
    cin >> pet_name;
    cout << "The Name Of Your Band Could be: " + city + pet_name + "!";
    return 0;
}

Output:
--------------------------------------------------------------------------------------------
Welcome To The Band Name Generator!
Where Did You Grew Up: Delhi
Enter The Name Of Your Pet: Pucha
The Name Of Your Band Could be: DelhiPucha!
--------------------------------------------------------------------------------------------

  




  
  
