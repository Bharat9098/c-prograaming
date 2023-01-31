#include <iostream>
using namespace std;

int main() 
{
  for(int row = 0; row < 4; row = row+1){ // rows observe  outer loop
    for(int col = 0; col < 5; col = col + 1 ){ // columns observe inner  loop
      cout << "*";
    }
    cout << endl;
  }
}    