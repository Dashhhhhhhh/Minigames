#include <string>
#include <iostream>
#include <array>
#include <time.h>
#include <windows.h>
int main(){
    std::cout << "Print more usernames by hitting Enter.\n";

    bool restart = false;
    do{
        // some restart stuff 
        restart = false;
        srand(time(NULL));
        int num;
       
       //randomization
        int Ran1 = rand() % 15;
        int Ran2 = rand() % 15;
        
        // array of words
        std::array<std::string, 15> Part1 = { std::string("Kled"), "Captain", "Schlong", "Fiddle", "Loli", "Dong","Dingle","Slimy","Slow","Master","Balls","Mega","Nutz","Faze","Sticky"};
        std::array<std::string, 15> Part2 = { std::string("Gecko"), "Main", "Camper", "Licous", "Moist", "Only","Smasher","Tingler","Sticky","Fart","Sticky","Booty","Buster","xDream","Women"};
        num = rand() % 1000;

        std::cout << Part1[Ran1] << Part2[Ran2] << num;
        
        //no duplicates when spamming
        Sleep(1000);
     
        // restart func
        std::string in;
        getline(std::cin, in);
        restart = true;
    }while(restart);

}