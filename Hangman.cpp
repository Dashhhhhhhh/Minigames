#include <iostream>
#include <string>
#include <vector>
bool run;



int main(){
    
    
    std::string updateWord(std::string word, std::vector<int> characterLocations, char to_update) {
    char dummy;
    std::vector<char> word_vec (word.length(),dummy);

    for (int i = 0; i < word.length(); i++) {
        std::vector<int>::iterator found = std::find(characterLocations.begin(), characterLocations.end(), i);
        if(found != characterLocations.end()) { // if i is in the characterLocations vector
            word_vec[i] = to_update;
            characterLocations.erase(found);
        }
        else {
            word_vec[i] = word[i];
        }
    }
    }

    
    
    
    
    
    std::cout << "Welcome to Hangman!" << std::endl;
    run = true;


    while (run) {

    }
}




















