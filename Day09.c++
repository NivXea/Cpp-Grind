//Everything About <algorithm>
#Level - 0 (Must Know)

1. Sorting in Ascending Order
Syntax: sort(begin,end); 

2. Sorting with Comparator
Syntax: sort(begin , end , cmp);
Now, cmp is the Condition for sorting, it can be greater<int>() to sort in descending and custom too..

3. Reversing an Array/Vector
Synatx: reverse(begin , end(;

4. Find Max and Min in Vector
Syntax: int mx = *max_element(v.begin() , v.end());
        int mn = *min_element(v.begin() , v.end());

5. Counting Occurence of an Element
Syntax: int freq = count(v.begin() , v.end() , x); 
freq = No. of times x appeared in v;

6. Finding an Element in a Vector or checking its Presence
Syntax: auto it = find(v.begin() , v.end() , X);
if (it != v.end()) //X is present in v
Index of X = it - v.begin();
and if X is not in v then index = v.size();
_____________________________________________________________________________________________________________________________________________________________________________________________
#Level 2(Searching + Bounds)

1. Binary Search
Check The presence of an element in a SORTEDDDD array/vector 

Syntax: auto found = binary_search(v.begin() , v.end() , X);
        binary_search() --> return True/False;
        if (found) cout << "Exists";

Ex: 
int main(){
    vector<int> v = {87,43,2,3,1,5,66,87};
    sort(v.begin() , v.end());

    auto found43 = binary_search(v.begin() , v.end(), 43);
    auto found33 = binary_search(v.begin() , v.end(), 33);
    if (found43) cout << "43 Present\n";
    else cout << "43 Absent";
    if (found33) cout << "33 Present\n";
    else cout << "33 Absent";

    return 0;
}

Output:
-----------------
43 Present
33 Absent
-----------------

2. 


___________________________________________________________________________________________________________________________________________________________________________________________
  









