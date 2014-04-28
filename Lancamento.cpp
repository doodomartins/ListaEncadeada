#include "Lancamento.h"
#include <cstring>

Lancamento::Lancamento(char* nome, double valor){
   //verificar tamanho da string

    this->nomee = new char[strlen(nome)+1];
    strcpy(nomee, nome);
    this->valorr = valor;
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
