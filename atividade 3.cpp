#include <iostream>

using namespace std;

int main(){
  float X;

  while(true){
    cout << "digite um numero, por favor!" << endl;
    cin >> X;

    if (X > 0){
        cout << X << " eh potivito" << endl;
        }
    else if(X < 0){
        cout << X << " eh negativo" << endl;
    }
    else{
        cout << X << " eh neutro" << endl;
        }
  }

    return 0;

}
