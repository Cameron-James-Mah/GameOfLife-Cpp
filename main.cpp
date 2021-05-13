#include <iostream>
#include <stdlib.h>

using namespace std;
const int gridSize = 80;
bool grid[gridSize+1][gridSize+1];
bool copiedGrid[gridSize+1][gridSize+1];

void printGrid(){
   for (int i = 0; i <= gridSize; i++){
        for (int j = 0; j <= gridSize; j++){
            if(grid[i][j] == true){
                cout << " *";
            }
            else {
                cout << "  ";
            }
            if (j == gridSize){
                cout << endl;
            }
    }
}
}
void copyGrid(){
   for (int i = 0; i <= gridSize; i++){
        for (int j = 0; j <= gridSize; j++){
            copiedGrid[i][j] = grid[i][j];
    }
}
}
void LifeOrDeath(){
   int life = 0;
   for (int i = 0; i <= gridSize; i++){
       for (int j = 0; j <= gridSize; j++){
            life = 0;
            if (copiedGrid[i+1][j] == true){
                life++;
            }
            if (copiedGrid[i+1][j-1] == true){
                life++;
            }
            if (copiedGrid[i+1][j+1] == true){
                life++;
            }
            if (copiedGrid[i-1][j] == true){
                life++;
            }
            if (copiedGrid[i-1][j-1] == true){
                life++;
            }
            if (copiedGrid[i-1][j+1] == true){
                life++;
            }
            if (copiedGrid[i][j-1] == true){
                life++;
            }
            if (copiedGrid[i][j+1] == true){
                life++;
            }
            if (copiedGrid[i][j] == true && life == 2 || copiedGrid[i][j] == true && life == 3){
                grid[i][j] = true;
            }
            else if (copiedGrid[i][j] == false && life == 3){
                grid[i][j] = true;
            }
            else {
                grid[i][j] = false;
            }
       }
   }
}
int main()
{
   for (int i = 0; i <= gridSize; i++){
      for (int j = 0; j <= gridSize; j++){
         grid[i][j] = false;
    }
}
   /*
   grid[0][0] = true;
   grid[0][gridSize-1] = true;
   grid[gridSize-1][0] = true;
   grid[gridSize-1][gridSize-1] = true;*/
/*
    grid[gridSize/2][gridSize/2] = true;
    grid[gridSize/2-1][gridSize/2] = true;
    grid[gridSize/2][gridSize/2+1] = true;
    grid[gridSize/2][gridSize/2-1] = true;
    grid[gridSize/2+1][gridSize/2+1] = true;*/
//Gospers glider
    grid[5][0] = true;
    grid[5][1] = true;
    grid[4][0] = true;
    grid[4][1] = true;

    grid[8][12] = true;
    grid[8][13] = true;
    grid[7][11] = true;
    grid[7][15] = true;
    grid[6][10] = true;
    grid[6][16] = true;
    grid[6][24] = true;
    grid[5][10] = true;
    grid[5][14] = true;
    grid[5][16] = true;
    grid[5][17] = true;
    grid[5][22] = true;
    grid[5][24] = true;
    grid[4][10] = true;
    grid[4][16] = true;
    grid[4][20] = true;
    grid[4][21] = true;
    grid[3][11] = true;
    grid[3][15] = true;
    grid[3][20] = true;
    grid[3][21] = true;
    grid[3][34] = true;
    grid[3][35] = true;
    grid[2][12] = true;
    grid[2][13] = true;
    grid[2][20] = true;
    grid[2][21] = true;
    grid[2][34] = true;
    grid[2][35] = true;
    grid[1][22] = true;
    grid[1][24] = true;
    grid[0][24] = true;

   while (true){
   printGrid();
   copyGrid();
   LifeOrDeath();
   system("CLS");
   }
    return 0;
}
