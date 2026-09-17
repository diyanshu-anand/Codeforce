#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swapNums(vector<int> *list, int PositionX, int PositionY){
    int temp = (*list)[PositionX];
    
    (*list)[PositionX] = (*list)[PositionY];  
    (*list)[PositionY] = temp;  
}

int main () {

    string operation;
    cin >> operation;

    string resultNums;

    vector<int> minlist;

    for (size_t i = 0; i < operation.length(); i++)
    {
        
        if (operation[i] != '+') {
            // ACCESSING NUMBERS
         
            if (operation[i] - '0' <= 3) {
                resultNums.push_back(operation[i]);        
            }
            
        }

    }
    
    for (size_t i = 0; i < resultNums.length(); i++)
    {
        int current = resultNums[i] - '0';
        minlist.push_back(current);
        
    }
    

    for (size_t i = 0; i < minlist.size(); i++)
    {
        int key = minlist.at(i);
        int j = i - 1;

        while (j >= 0 && minlist.at(j) > key) 
        {
            minlist.at(j + 1) = minlist.at(j);
            j--;
        }
        minlist.at(j + 1) = key;

    }
    
    string resultstring;

    for (size_t i = 0; i < minlist.size(); i++)
    {
        resultstring.push_back(minlist.at(i) + '0');

        if (i+1 != minlist.size()) {
            resultstring.push_back('+');
        }
    }
    
    cout << resultstring;

    return 0;
}