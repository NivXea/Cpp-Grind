// Conditional Statements(if/else if/else)

int main() {
    int num;
    cout << "Enter A Number: ";
    cin >> num;

    if (num%2 == 0) cout << num << " Is An Even Number!"; //Same as C
    else cout << num << " Is An Odd Number!";

    return 0;
}
_______________________________________________________________________________________________________________________________________________________________________________________________
// C++ Pizza Deliveries

#include <iostream>
using namespace std;

int main() {
    char size, extra_cheese , pepperonni;
    int bill;

    cout << "Welcome to C++ Pizza Deliveries!!!\n";
    cout << "Enter The Size Of Your Pizza(S,M,L): ";
    cin >> size;
    
    if (size == 'S') bill = 15;
    else if (size == 'M') bill = 20;
    else bill = 25;

    cout << "Do You Wanna Add Pepperonni (Y/N): ";
    cin >> pepperonni;
    if (pepperonni == 'Y') if (size == 'S') bill += 2; else bill += 3;

    cout << "Do You Want Extra Cheese(Y/N): ";
    cin >> extra_cheese;
    if (extra_cheese == 'Y') bill += 1;

    cout<< "Your Total Bill is: $" << bill;
    return 0;
}
Output:
-------------------------------------------------------------
Welcome to C++ Pizza Deliveries!!!
Enter The Size Of Your Pizza(S,M,L): M
Do You Wanna Add Pepperonni (Y/N): Y
Do You Want Extra Cheese(Y/N): N
Your Total Bill is: $23
--------------------------------------------------------------
