#include <string>
#include <vector>
#include <iostream>
#include <array>
#include <map>
#include <random>
#include <time.h>
#include <windows.h>

int main(){
    std::cout << "Print more usernames by hitting Enter.\n";
    bool restart = false;
    do{
        // some restart stuff 
        restart = false;
        int num = rand() % 9;
        std::string number;
        
        // 4 digits
        for (int i = 0; i < 2; ++i)
        {
            
            //trying to make code memorable + 4 digits
            number.push_back('0' + rand() % 9);
            number.push_back('0' + num);
        }

        std::cout << number;

        //no duplicates when spamming
        Sleep(1000);
     
        // restart func
        std::string in;
        getline(std::cin, in);
        restart = true;
    }while(restart);

}