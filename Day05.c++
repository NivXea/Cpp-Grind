//Vectors (Much like Python list, not arrays)
Syntax: 
#include <vector>
vector<int> v; //An Empty int Vector
vector<string> names; //An Empty String Vector 

By Default Values:
vector<int> a(5); // 5 Elements and all are 0
vector<int> b(5,7); //5 elements and all are 7
______________________________________________________________________________________________________________________________________________________________________________________________
// Adding/Removing/Accessing Elements in a Vector

1. Adding
Syntax: vector_name.push_back(element);

vector<int> num; //An empty int vector num
num.push_back(10); //10 is now appended in num ; num = {10}

2. Removing
Syntax: vector_name.pop_back(); //Removes Last Element
vector<int> num = {10,20};
num.pop_back(); //num = {10}, 20 got removed

3. Accessing
Syntax: vector_name[index] & vector_name.at(index) 
NOTE: .at(index) is Considered safer cuz it gives index out of range error while [index] is faster but dangerous

vector<int> num = {10,20,30};
cout << "\n" << num.at(2); //will print 30

4. Iterating through Vector
for (int x : num) cout << x; 

For Ex:
vector<int> num = {10,20,30};
num.pop_back(); //Removes 30
num.push_back(40);//Appends 40
for (int x : num) cout<< x << " "; //Prints each element of vector num
cout << "\n" << num.at(2); //Prints the value at index 2 = 40

Output:
----------------
10 20 40 
40
----------------
______________________________________________________________________________________________________________________________________________________________________________________________
// Interconverting Strings and integers
1. stoi() --> converts strings to int
2. to_string() --> converts int to string

    string num = "231";
    int x = stoi(num);
    cout << x << "\n";

    x = 445;
    num = to_string(x);
    cout << num;

Output:
-------------------------
231 //This is an int
445 //This is a string
-------------------------
______________________________________________________________________________________________________________________________________________________________________________________________
// Loops
1. For Loops

in Python: for i in any_iterable: return
in C++ : for (int/string/char i : any_interable) return;
Basic Loop: for (int i , i <= 10 , i++) {code}
Infinite for loop: for(;;){Runs Infinitely}

2. While loops
in Python: while condition == True:
in C++ while (condition == True){}

______________________________________________________________________________________________________________________________________________________________________________________________
//Converting a Char Vector into a String

vector<char> letters = {'h','e','l','l','o'}
string word(letters.begin() , letters.end())
cout << word;





