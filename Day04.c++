//Generating Random Numbers
Syntax:

#include <random>
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> dist(1, 3);


int num = dist(gen); //Random Number B/W 1 & 3 (include 3 unlike python's randint)

Also, To generate a floating number from 0 to 1: uniform_real_distribution<float> dist(0.0, 1.0); use this..
NOTE: For Choosing a random element from an array/vector, generate the random number from 0 to (len(arr) - 1)
___________________________________________________________________________________________________________________________________________________________________________________________
// Arrays in C++
Very Similar to Arrays in C 
Fixed Size
No Append
No Remove
No Changes

int num[] = { 1 ,2 ,3 ,5};

Cool Trick: To Find The Size of An Array use arr_size = sizeof(num[])/sizeof(num[0])
sizeof(num) ---> Size of the Array in Bytes
sizeof(num[0]) --> Size of Each element of that array
___________________________________________________________________________________________________________________________________________________________________________________________
// Rock-Paper-Scissors Game

#include <iostream>
#include <random>
#include <string>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,2);

    int user_choice;
    string comp_choice;

    string options[3] = {"rock" , "paper" , "scissors"};

    cout << "Enter 0 for Rock, 1 For Paper & 2 for Scissors: ";
    cin >> user_choice;
    comp_choice = options[dist(gen)];

    if (user_choice == 0) if (comp_choice == "rock") cout << "Draw!"; else if (comp_choice == "paper") cout << "You Lose!"; else cout << "You Win!";
    else if (user_choice == 1) if (comp_choice == "rock") cout << "You Win!"; else if (comp_choice == "paper") cout << "Draw!"; else cout << "You Lose!";
    else if (user_choice == 2) if (comp_choice == "rock") cout << "You Lose!"; else if (comp_choice == "paper") cout << "You Win!"; else cout << "Draw!";
    else cout << "You Entered Invalid Choice, You Lose!";

    return 0;
}




































