#include <iostream>
using namespace std;
void triangle(int height);

int main() {
  int height;
  cout<<"請輸入高度:";
  cin>> height;
  triangle(height);
}
void triangle(int height){
  if (height<=0 || height >8 )
   cout<<"out of range";
  else
   for(int x = 0; x < height; x++){
      for(int y = x + 1; y < height; y++){
        cout<< " ";
      }
      for(int a = height - x; a < height; a++){
        cout<< "#";
      }
      cout<< "# ";
      for(int b = height - x; b < height; b++){
        cout<<"#";
      }
      cout<< "#\n";
  }
}
