#include <string>
#include <iostream>
#include <array>
#include <time.h>
#include <windows.h>
int main(){
    std::cout << "You can print more usernames by hitting enter\n";

    bool restart = false;
    do{
        restart = false;
        srand(time(NULL));
        int num;
       //randomization
        int Ran1 = rand() % 15;
        int Ran2 = rand() % 15;
        // array of words
        std::array<std::string, 15> Part1 = { std::string("Kled"), "Captain", "Schlong", "Fiddle", "Loli", "Dong","Dingle","Slimy","Slow","Master","Balls","Mega","Nutz","Faze","Sticky"};
        std::array<std::string, 15> Part2 = { std::string("Gecko"), "Main", "Camper", "Licous", "Moist", "Only","Smasher","Tingler","Sticky","Smurf","Sticky","Booty","Buster","Pucket","Women"};

        num = rand() % 1000;

        std::cout << Part1[Ran1] << Part2[Ran2] << num;
        std::string in;
        // restart func
        getline(std::cin, in);
        restart = true;
        Sleep(700);
    }while(restart);

}