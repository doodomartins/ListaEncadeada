#include <iostream>
#include "ListaEncadeada.hpp"
using namespace std;

int main() {
    ListaEncadeada<int> lista;
    int um = 1;
    int dois = 2;
    int tres = 3;
    int quatro = 4;
    int cinco = 5;
    int seis = 6;
    int zero = 1110;

    int* p1 = &um;
    int* p2 = &dois;
    int* p3 = &tres;
    int* p4 = &quatro;
    int* p5 = &cinco;
    int* p6 = &seis;
    int* p0 = &zero;

    lista.adicionaNoInicio(p6);
    lista.adicionaNoInicio(p5);
    lista.adicionaNoInicio(p4);
    lista.adicionaNoInicio(p3);
    lista.adicionaNoInicio(p2);
    lista.adicionaNoInicio(p1);
    lista.adiciona(p0);

    cout << lista.retiraDaPos(6) << " "<< endl;
    //cout << lista.retiraDoInicio() << " "<< endl;
    //cout << lista.retiraDoInicio() << " "<< endl;
    //cout << lista.retiraDoInicio() << " "<< endl;
    //cout << lista.retiraDoInicio() << " "<< endl;
    //cout << lista.retiraDoInicio() << " "<< endl;
 /*  try{
    lista.adicionaNaPos(b, a);
    } catch (PosInvalida e){
        cout << "world!" << endl;
    } */
  // lista.adiciona(b);
  // lista.retiraDoInicio();
  //  if(lista.vazia()){
  //  cout << "Hello world!" << endl;
  //  } else {
  //      cout << "Bye world!" << endl;
  // }
    return 0;
}
