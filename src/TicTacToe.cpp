// my first program in C++
#include "TicTacToe.h"
#include <iostream>
#include <cstdlib>

using namespace std;

char matrix [3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int n;

void Draw(){
  system ("cls");
  cout << "Tic Tac Toe Version 0.7"<< endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout <<" "<< matrix[i][j]<< " ";
    }
    cout << endl;
  }
}
void Input(){

  int number;
    cout<< "it's "<< player << " turn. " << "Press the number where you want to play:";
    cin >> number;


    switch (number) {

      case 1 :

      if(matrix[0][0] == 'X' || matrix[0][0] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[0][0] << endl;
      Input();
      break;
      }else if(matrix[0][0] == '1'){
        //input();
        matrix[0][0] = player;
        break;
      }

      case 2 :

      if(matrix[0][1] == 'X' || matrix[0][1] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[0][1] << endl;
      Input();
      break;
    }else if(matrix[0][1] == '2'){
        //input();
        matrix[0][1] = player;
        break;
      }


      case  3 :

        if(matrix[0][2] == 'X' || matrix[0][2] == 'O'){
              cout<<"You cannot use this position it's already in use by "<<matrix[0][2] << endl;
        Input();
        break;
      }else if(matrix[0][2] == '3'){
          //input();
          matrix[0][2] = player;
          break;
        }

      case 4 :

      if(matrix[1][0] == 'X' || matrix[1][0] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[1][0] << endl;
      Input();
      break;
    }else if(matrix[1][0] == '4'){
        //input();
        matrix[1][0] = player;
        break;
      }

      case 5 :

      if(matrix[1][1] == 'X' || matrix[1][1] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[1][1] << endl;
      Input();
      break;
    }else if(matrix[1][1] == '5'){
        //input();
        matrix[1][1] = player;
        break;
      }

      case 6 :

      if(matrix[1][2] == 'X' || matrix[1][2] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[1][2] << endl;
      Input();
      break;
    }else if(matrix[1][2] == '6'){
        //input();
        matrix[1][2] = player;
        break;
      }

      case 7 :

      if(matrix[2][0] == 'X' || matrix[2][0] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[2][0] << endl;
      Input();
      break;
    }else if(matrix[2][0] == '7'){
        //input();
        matrix[2][0] = player;
        break;
      }

      case 8 :

      if(matrix[2][1] == 'X' || matrix[2][1] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[2][1] << endl;
      Input();
      break;
    }else if(matrix[2][1] == '8'){
        //input();
        matrix[2][1] = player;
        break;
      }

      case 9 :

      if(matrix[2][2] == 'X' || matrix[2][2] == 'O'){
            cout<<"You cannot use this position it's already in use by "<< matrix[2][2] << endl;
      Input();
      break;
    }else if(matrix[2][2]== '9'){
        //input();
        matrix[2][2] = player;
        break;
      }

      default :
      cout<< "This number its to big or too little" << endl;
    }



}
char Win(){
      // First player
      if (matrix[0][0] == 'X' && matrix[0][1]=='X' && matrix[0][2] == 'X' )
          return 'X';
      if (matrix[1][0] == 'X' && matrix[1][1]=='X' && matrix[1][2] == 'X' )
          return 'X';
      if (matrix[2][0] == 'X' && matrix[2][1]=='X' && matrix[2][2] == 'X' )
          return 'X';

      if (matrix[0][0] == 'X' && matrix[1][0]=='X' && matrix[2][0] == 'X' )
          return 'X';

      if (matrix[0][1] == 'X' && matrix[1][1]=='X' && matrix[2][1] == 'X' )
          return 'X';

      if (matrix[0][2] == 'X' && matrix[1][2]=='X' && matrix[2][2] == 'X' )
          return 'X';

      if (matrix[0][0] == 'X' && matrix[1][1]=='X' && matrix[2][2] == 'X' )
          return 'X';

      if (matrix[0][2] == 'X' && matrix[1][1]=='X' && matrix[2][0] == 'X' )
          return 'X';

      // Second player
      if (matrix[0][0] == 'O' && matrix[0][1]=='O' && matrix[0][2] == 'O' )
          return 'O';
      if (matrix[1][0] == 'O' && matrix[1][1]=='O' && matrix[1][2] == 'O' )
          return 'O';
      if (matrix[2][0] == 'O' && matrix[2][1]=='O' && matrix[2][2] == 'O' )
          return 'O';

      if (matrix[0][0] == 'O' && matrix[1][0]=='O' && matrix[2][0] == 'O' )
          return 'O';

      if (matrix[0][1] == 'O' && matrix[1][1]=='O' && matrix[2][1] == 'O' )
          return 'O';

      if (matrix[0][2] == 'O' && matrix[1][2]=='O' && matrix[2][2] == 'O' )
          return 'O';

      if (matrix[0][0] == 'O' && matrix[1][1]=='O' && matrix[2][2] == 'O' )
          return 'O';

      if (matrix[0][2] == 'O' && matrix[1][1]=='O' && matrix[2][0] == 'O' )
        return 'O';


      return '/';
}
void TogglePlayer(){

  if(player=='X')
    player ='O';

  else
    player ='X';
}

