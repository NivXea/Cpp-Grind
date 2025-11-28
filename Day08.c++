//Converting String into A Char Vector
string s = "AKSHAY";
vector<char> v(s.begin() , s.end());

//Converting an Array into a Vector
int arr[] = {1,2,3};
vector<int> v(begin(arr) , end(arr));

NOTE:if Datatype of Array is unknown then,
auto v = vector(begin(arr) , end(arr)); //Internally creates vector<datatype> v;
