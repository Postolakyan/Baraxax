#include "baraxaxh.hpp"
void wordgame() //The program prints the words generated by moving the letters of the imported wordv
{
	string word;
   cout<<"Please insert the word"<<endl; cin>>word;
    int i = 0;
    
    sort(word.begin(), word.end());
    do
    {
	cout << word <<endl;
        ++i;
    } while (next_permutation(word.begin(), word.end()));//generates the next greater lexicographic permutation of a range of elements
    cout <<"Number of Possible options="<< i;//print the number of possible options


}

