// NumUniquePairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int numberOfPairs(vector<int>& a, long k, std::ofstream &fout);

int main()
{
    ofstream fout(stdout);
    if (!fout.is_open()) {
        return -1;
    }

    int a_count;
    cin >> a_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> a(a_count);

    for (int i = 0; i < a_count; i++) {
        int a_item;
        cin >> a_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        a[i] = a_item;
    }

    long k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int res = numberOfPairs(a, k, fout);

    fout << res << "\n";

    fout.close();

    return 0;
}


// Complete the numberOfPairs function below.
int numberOfPairs(vector<int>& a, long k, std::ofstream &fout) {
    int numPairs = 0;
    list<int> li(a.begin(), a.end());
    
    //Convert to a list to take advantage of the unique function
    li.sort();
    li.unique();

    for (auto itr = li.begin(); itr != li.end(); itr++) {
        int needle = k - *itr;
        if(li.end() != find(itr, li.end(), needle))
        {
            numPairs++;
            //fout << "(" << *itr << ", "<< needle << ")" << endl;
            //we will check all items but in the find call we only check from 
            //current itr to end so we do not get duplicates
        }
    }

    return numPairs;
}


/*


*/


