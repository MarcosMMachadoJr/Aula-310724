#include <iostream>

using namespace std;

int main() {
      float peso, altura;
  while(true){
      cout << "Qual o seu peso?";
      cin >> peso;
      cout << "Qual sua altura?";
      cin >> altura;

      float IMC = peso / (altura * altura);
      //printf("%2.1f", IMC);

      if(IMC < 18.5){
          printf("Seu IMC %2.1f  indica que você está abaixo do peso ideal! :( \n", IMC);
      }
      else if(IMC > 18.6 and IMC < 24.9){
          printf("Seu IMC %2.1f indica que você está no peso ideal! :D \n", IMC);
      }
      else if(IMC > 25.0 and IMC < 29.9){
          printf("Seu IMC %2.1f indica que você está em sobrepeso! :( \n", IMC);
      }
      else if(IMC >= 30.0){
          printf("Seu IMC %2.1f indica que você está em obesidade! :( \n", IMC);
      }
  }
  return 0;
}
