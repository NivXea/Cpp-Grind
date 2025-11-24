//Bill Splitting Project Using Arithmatic Operations

#include <iostream>
using namespace std;

int main() {
    float bill_amount;
    int splitters , tip;
    cout << "Enter Bill Amount: ";
    cin >> bill_amount;
    cout << "Enter Number Of People Splitting the bill: ";
    cin >> splitters;
    cout << "Enter Tip Amount: ";
    cin >> tip;
    
    float total_bill = bill_amount + tip;
    float splitted_bill = total_bill/float(splitters) ;
    cout << "Each Person Should Pay: $" << splitted_bill;
    return 0;
}
Output:
-------------------------------------------------------
Enter Bill Amount: 5.6
Enter Number Of People Splitting the bill: 2
Enter Tip Amount: 10
Each Person Should Pay: $7.8
-------------------------------------------------------
___________________________________________________________________________________________________________________________________________________________________________________________


  
