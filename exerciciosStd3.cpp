#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num1, num2;
    cout <<"Digite um número: " << endl;
    cin >> num1; 
    cout <<"Digite um número: " << endl;
    cin >> num2;
    double soma = num1 + num2;
    double subtracao = num1 - num2;
    double divisao = num1 / num2;
    double multiplicacao = num1 * num2;

    cout << fixed << setprecision(2) <<"A soma dos numeros é: " << soma <<endl; 
    cout << fixed << setprecision(2) <<"A subtracao dos numeros é: " << subtracao <<endl; 
    cout << fixed << setprecision(2) <<"A divisao dos numeros é: " << divisao <<endl; 
    cout << fixed << setprecision(2) <<"A multiplicacao dos numeros é: " << multiplicacao <<endl; 

return false;
}