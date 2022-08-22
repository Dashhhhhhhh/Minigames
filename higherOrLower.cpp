#include <iostream>
#include "windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

int main(){
    int in;
    bool rest = false;
    bool game = true;
    bool mainLoop = false;
    std::string restart;
    do{
        mainLoop = true; 
        rest = false;
        int x;
        game = true; 
        x =  rand() % 1000 + 1; // Note: 1+rand()%6 is biased
        while(game){
            std::cout << "Welcome to Higher or Lower!" << std::endl;
            Sleep(1000);
            std::cout << "Please state a number between 1-1000" << std::endl;
            std::cin >> in;   
            while(mainLoop){
                game = false;
                if(in > x){
                    printf("lower\n");
                    std::cin >> in;
                } else if(in < x){
                    printf("higher\n");
                    std::cin >> in;
                } else{
                    mainLoop = false;
                    printf("YOU WIN\n");
                    Sleep(1000);
                    printf("Restarting...\n");
                    Sleep(1500);
                    rest = true;          
                }
            }
        }
    }while(rest);

} 