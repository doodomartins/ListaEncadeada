#include "Lancamento.h"
#include <cstring>

#include <iostream>
using namespace std;



Lancamento::Lancamento(char* nome, double valor){
    //verificar tamanho da string

    this->nomee = new char[strlen(nome)+1];
    strcpy(nomee, nome);
    this->valorr = valor;
    cout << nomee << endl;
}

char* Lancamento::nome(){
    return this->nomee;
}

double Lancamento::valor(){
    return this->valorr;
}

Lancamento::~Lancamento()
{

}

Lancamento::Lancamento()
{

}
