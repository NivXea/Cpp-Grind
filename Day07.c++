//Unordered Map (Like Python Dictionaries)
#include <unordered_map>
using namespace std;

Syntax: unorder_map<Data_type_of_Key , data_type_of_value> name_of_map;

1. Creating an unordered_map
unordered_map<string , int) mp;

2.Inserting Values
mp["AKSHAY"] = 17

NOTE: if key doesn't exist, then it is created and if it's already in there, then the value of overwritten.

3. Accessing Values
cout << mp["AKSHAY"] // 17 
NOTE: if not present then it gives a new entry with 0 value

4. Checking if a key Exists
Syntax: if (mp.find("Key") != mp.end()) cout << "Exists";

5. Erasing A key
mp.erase("AKSHAY");

6. Looping Through A Map
for (auto &p : mp) cout << p.first << "->" <<  p.second;
_______________________________________________________________________________________________________________________________________________________________________________________
// Sorting Vectors/Lists
Syntax: #include <algorithm>
sort(v.begin() , v.end() , comparator) 
Now, This cmp is: 

[](int a , int b){ return a < b} // Put a before b if a < b is True 
[](int b , int a){ return a < b} // Put b before a if a < b is True

Ex:

    vector<int> v = {-8, -12 , -6 , 1 ,3 ,5 ,2 ,17,0};
    sort(v.begin() , v.end() , [](int a , int b){return a < b;}); //Sorts in Ascending Order
    for (int i : v) cout << i << " ";

    cout << "\n";

    sort(v.begin() , v.end() , [](int b , int a){return a < b;});// Sorts in Descending Order
    for (int i : v) cout << i << " ";

Output:
-------------------------------------------------------
-12 -8 -6 0 1 2 3 5 17 
17 5 3 2 1 0 -6 -8 -12 
-------------------------------------------------------
__________________________________________________________________________________________________________________________________________________________________________________________


