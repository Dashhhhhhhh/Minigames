#include <iostream>
#include "windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

int main(){
    int x;
    
    bool rest = false;
    bool game = true;
    bool mainLoop = true;
    int n;
    int in;
    do{
        
        x = rand() % 10 + 10;
        game = true;
        while(game){
            printf("Welcome to Towers!\n");
            Sleep(1000);
            printf("To play Towers pick a number. (1-10)\n");
            std::cin >> n;
            while(mainLoop){
                game = false;
                mainLoop = false;
                std::cout << "+ " << x << " = ";
                std::cin >> in;


            }
        }
    }while(rest);

} 