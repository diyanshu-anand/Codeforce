#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
    int questionnum;
    cin >> questionnum;

    string userInput;
    vector<string> allInputs;

    if (questionnum < 1000 && questionnum > 0) {
        for (size_t i = 0; i < questionnum; i++)
        {
            getline(cin, userInput);
            if (userInput.length() > 6) {
                return -1;
            }
            allInputs.push_back(userInput);
        }
                
    }

    int responses[3];
    int finalVerdict;

    for (size_t i = 0; i < allInputs.size(); i++)
    {
        
        for (size_t j = 0; j < allInputs[i].length(); j++)
        {
            if (allInputs[i].at(j) != ' ' && allInputs[i].at(j) != '\n') {
                if (allInputs[i].at(j) == '0') {
                    responses[j % 2] = 0;
                }
                else if (allInputs[i].at(j) == '1') {
                    responses[j % 2] = 1;
                }
                else {
                    return -1;
                }    
            }
            
        
        }

        int yCount;
        for (size_t i = 0; i < 3; i++)
        {
            
            if (responses[i] == 1) {
                yCount++;
            }
        }

        if (yCount >= 2) {
            finalVerdict++;
        }
        
        
    }
    
    printf("%d", finalVerdict);


    return 0;
}