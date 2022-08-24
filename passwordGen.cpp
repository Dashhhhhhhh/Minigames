#include <string>
#include <vector>
#include <iostream>
int main(){
    std::cout << "Restart program with enter.\n";

    bool restart = false;
    do{
        // some restart stuff 
        restart = false;
        ////////////////////////////////////////

        // todo

        
        std::cout << "Hello :)\n";



        ////////////////////////////////////////
        // restart func + CODE ENDS 
        std::string in;
        getline(std::cin, in);
        restart = true;
    }while(restart);

}