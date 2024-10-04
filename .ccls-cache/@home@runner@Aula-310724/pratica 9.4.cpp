#include <iostream>

using namespace std;

int main(){
  int X, Y;
  while(true){
      cout << "digite um numero: \n";
      cin >> X;
      cout << "digite outro numero: \n";
      cin >> Y;

      if(X > Y){
        cout << X << " eh maior \n";
      }
      else if(Y > X){
        cout << Y << " eh maior \n";
      }
      else if(X = Y){
        cout << X << " e " << Y << " saum iguais \n";
      }
      int maior = (X > Y) ? X : Y;
      cout << maior << endl;
    }
  return 0;

}
