#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
    int wordCount;
    cin >> wordCount;
    
    string sentenceInput;
    vector<string> sentences;
    
    for (size_t i = 0; i < wordCount; i++)
    {
        cin >> sentenceInput;
        sentences.push_back(sentenceInput);
    }

    for (size_t i = 0; i < sentences.size(); i++)
    {
        if (sentences[i].length() > 10) {
            string newSentence;
            string sentenceLength = to_string(sentences[i].length()-2);

            newSentence.push_back(sentences[i].at(0));
            newSentence.append(sentenceLength);
            newSentence.push_back(sentences[i].at(sentences[i].length()-1));
            
            cout << newSentence << "\n";
        }

        else {
            cout << sentences[i] << "\n";
        }
    }
    
    

}