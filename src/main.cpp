// my first program in C++
#include "TicTacToe.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
          int n =0;
          Draw();
          while(1){
            n++;
            Input();
            Draw();
            if(Win() =='X'){
              cout << "X wins"<< endl;
              break;
            }else if(Win() =='O'){
              cout << "O wins" << endl;
              break;
            }else if(Win() =='/' && n == 9){
              cout << "It's a tie!" << endl;
              break;
            }
            TogglePlayer();
          }

  return 0;
}
