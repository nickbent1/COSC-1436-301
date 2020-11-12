#include <iostream>
using namespace std;

const char W = 20, H = 10;
unsigned char user = {1};
int posX = 1, posY = 1;
unsigned char trigger;

void userAction();

struct barrier{
char symbol;
bool active;
int x;
int y;

};

unsigned char maze[H][W] = {
{'@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@'},
{'@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '@', '@', ' ', ' ', ' ', ' ', ' ', ' ', '@', '@', ' ', '@'},
{'@', ' ', '@', ' ', '@', '@', '@', ' ', ' ', ' ', ' ', '@', '@', ' ', '@', ' ', ' ', ' ', ' ', '@'},
{'@', ' ', '@', ' ', '@', ' ', '@', ' ', '@', ' ', '@', '@', ' ', ' ', ' ', '@', ' ', '@', '@', '@'},
{'@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '@', ' ', '@', ' ', ' ', '@', ' ', '@', ' ', ' ', ' ', '@'},
{'@', '@', ' ', '@', ' ', '@', '@', '@', '@', ' ', '@', ' ', '@', '@', ' ', ' ', ' ', '@', ' ', '@'},
{'@', ' ', ' ', '@', ' ', ' ', ' ', ' ', '@', ' ', '@', ' ', ' ', ' ', '@', ' ', '@', '@', ' ', '@'},
{'@', ' ', '@', '@', '@', ' ', '@', ' ', ' ', ' ', '@', '@', '@', ' ', ' ', ' ', ' ', '@', ' ', '@'},
{'@', ' ', ' ', ' ', ' ', ' ', '@', ' ', '@', ' ', ' ', ' ', ' ', ' ', '@', '@', ' ', ' ', ' ', '@'},
{'@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@'},
};

int main(){
while (trigger != 'Q' || 'q'){

  cout << "Move by using WASD." << endl;
  cout << endl;

  maze [posX] [posY] = user;

  for(int y = 0; y < H; y++){
    cout << endl;
      for(int x = 0; x < W; x++){
        cout << maze [y][x];
      }
  }
  userAction();
  }
  return 0;
}
void userAction(){
  cout << "\nYour Move: ";
  cin >> trigger;

  int prevposX = posX;
  int prevposY = posY;
  unsigned char space = {32};

  switch(trigger){
    case 'a':
    if (maze[posX][posY - 1] != '@'){
      posY--;
    cout << posX << ',' << posY << endl;
    maze[prevposX][prevposY] = space;
    }
    system ("cls");
    break;

    case 'd':
    if (maze[posX][posY + 1] != '@'){
      posY++;
    cout << posX << ',' << posY << endl;
    maze[prevposX][prevposY] = space;
  }
  system("cls");
  break;

  case 's':
  if (maze[posX + 1][posY] != '@'){
    posX++;
  cout << posX << ',' << posY << endl;
  maze[prevposX][prevposY] = space;
}
  system("cls");
  break;

  case 'w':
  if (maze[posX - 1][posY] != '@'){
    posX--;
  cout << posX << ',' << posY << endl;
  maze[prevposX][prevposY] = space;
}
  system("cls");
  break;

  default:
  cout << "Invalid move" << endl;
  break;
}
}
