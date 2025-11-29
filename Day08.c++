//Converting String into A Char Vector
string s = "AKSHAY";
vector<char> v(s.begin() , s.end());

//Converting an Array into a Vector
int arr[] = {1,2,3};
vector<int> v(begin(arr) , end(arr));

NOTE:if Datatype of Array is unknown then,
auto v = vector(begin(arr) , end(arr)); //Internally creates vector<datatype> v;
_____________________________________________________________________________________________________________________________________________________________________________________
//Finding Max in an Array or Vector
Syntax: *max_element(v.begin() , v.end())

vector<int> v = { 1,2,3,4,50};
int maxi = *max_element(v.begin() , v.end()); // maxi = 50
______________________________________________________________________________________________________________________________________________________________________________________
//Highest Bidding Project
int main(){
    unordered_map<string , int> bid;
    bool game_over = false;

    while (not game_over)
    {
        string name;
        cout << "Enter Your Name: ";
        cin >> name;
        int bid_amt;
        cout << "Enter Bid Amount: ";
        cin >> bid_amt;

        bid[name] = bid_amt;

        char more_bidders;
        cout << "Are There Any More bidders?\n";
        cin >> more_bidders;

        if (more_bidders == 'Y') for (int i = 0 ; i < 20 ; i++) cout << "\n";
        else game_over = true;
    }
    string highest_bidder;
    int highest_bid = 0;
    for ( auto &p : bid)
    {   
        if (p.second > highest_bid) 
        {
            highest_bidder = p.first;
            highest_bid = p.second;
        }
    }



    cout << highest_bidder << " Has Won The Bid!";
}







