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
        int RanIndex = rand() % 10;
        std::array<std::string, 10> Part1 = { std::string("Kled"), "Captain", "Schlong", "Fiddle", "Loli", "Dong","Dingle","Slimy","Slow","Master"};
        std::array<std::string, 10> Part2 = { std::string("Gecko"), "Main", "Camper", "Licous", "Moist", "Only","Smasher","Tingler","Sticky","Smurf"};

        
        num = rand() % 1000;

        std::cout << Part1[RanIndex] << Part2[RanIndex] << num;
        std::string in;
        getline(std::cin, in);
        restart = true;
        Sleep(700);
    }while(restart);

}