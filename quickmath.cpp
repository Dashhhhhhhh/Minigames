#include <iostream>
#include "windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>

int main(){
    
    int x;
    bool rest = false;
    bool game = true;
    bool mainLoop = true;
    int n;
    int in;
    int ans;
    do{
        x = rand() % 10 + 5;
        game = true;
        mainLoop = true; 
        while(game){
            printf("Welcome to Quick Math!\n");
            Sleep(400);
            printf("To play quick math pick a number (1-10)\n");
            std::cin >> n;
            while(mainLoop){
                game = false;
                mainLoop = false;
                std::cout << "* " << x << " = ";
                std::cin >> in;
                ans = x * n;
                if(in == ans){
                    printf("Correct Answer\n");
                    Sleep(400);
                    printf("Restarting...\n");
                    rest = true;
                } else{
                    printf("Wrong Answer\n");
                    Sleep(100);
                    printf("Restarting...\n");
                    rest = true;
                }
            }
        }
    }while(rest);
} 