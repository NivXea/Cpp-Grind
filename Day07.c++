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




