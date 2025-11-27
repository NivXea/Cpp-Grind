//Creating Our Own Function
Syntax: (return type) name_of_the_function(parameters){
    Code Goes Here
      Return Value
    }
________________________________________________________________________________________________________________________________________________________________________________________
// To check the presence of an Element in an Iterable
#include <algorithm>

if (find(v.begin() , v.end() , target) != v.end) cout << "Found!";
else cout << "Not Found!";

int index_of_required_elemet = find(v.begin(), v.end() , target) - v.end();

// Counting Number Of Element in an Iterable
int count(v.begin() , v.end() , target);

NOTE: count() is slower than find() as count checks entire list while find() stops when element is found;

________________________________________________________________________________________________________________________________________________________________________________________
//Word Guessing Game
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm> 
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 2);
    
    //Creating a Random Word
    vector<string> words = {"aardvark", "baboon", "camel"};
    string correct_word = words[dist(gen)];

    //Creating place holder
    vector<char> user_ans;
    for (int i = 0 ; i < correct_word.size() ; i++) user_ans.push_back('_');
    

    while (true)
    {
        string v(user_ans.begin(), user_ans.end());
        string ans(user_ans.begin() , user_ans.end());
        cout << ans + "\n";

        if (v == correct_word) 
        {
        cout << "You win!";
        break;
        }

        char user_guess;
        cout << "Enter an Alphabet: ";
        cin >> user_guess;

        if (find(correct_word.begin() , correct_word.end() , user_guess) != correct_word.end())
        {
        cout << "Correct Guess!\n";
        for (int i = 0; i < correct_word.size(); i++) if (correct_word[i] == user_guess) user_ans[i] = user_guess;
        }
        else cout << "Wrong Guess!\n";  
    }
    return 0;
}
_____________________________________________________________________________________________________________________________________________________________________________________________







