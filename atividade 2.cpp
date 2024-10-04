#include <iostream>

using namespace std;

int main() {
  int n1, n2, n3, n4, n5;
  while (true) {
    cout << "digite um numero, por favor! \n";
    cin >> n1;
    cout << "digite outro numero, por favor! \n";
    cin >> n2;
    cout << "digite mais numero, por favor! \n";
    cin >> n3;
    cout << "digite mais umzinho, por favor! \n";
    cin >> n4;
    cout << "digite. esse é o ultimo, eu juro, por favor! \n";
    cin >> n5;

    int soma = n1 + n2 + n3 + n4 + n5;
    float media = (float)soma / 5;

    printf("A média é %2.2f \n", media);
  }
  return 0;
}
