#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout <<"Digite um número: " << endl;
    cin >> num1; 
    cout <<"Digite um número: " << endl;
    cin >> num2;
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int divisao = num1 / num2;
    int multiplicacao = num1 * num2;

    cout <<"A soma dos numeros é: " << soma <<endl; 
    cout <<"A subtracao dos numeros é: " << subtracao <<endl; 
    cout <<"A divisao dos numeros é: " << divisao <<endl; 
    cout <<"A multiplicacao dos numeros é: " << multiplicacao <<endl; 

return false;
}