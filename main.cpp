#include <iostream>
#include <windows.h>
#include "funcoes.hpp"
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
    double a, b;

  cout << "Atividade de Modularização\n\n";
  cout << "Digite o valor de a: ";
  cin>> a;
  cout << "Digite o valor de b: ";
  cin>> b;
    
    a=modulo(a);
    b=modulo(b);

    
    cout << soma(a,b) << endl;
    cout << subtracao(a,b) << endl;
    cout << multiplicacao(a,b) << endl;
    cout << divisao(a,b) << endl;
    
 
 
  cout << endl;
  return 0;
}
