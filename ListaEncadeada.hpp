#ifndef LISTAENCADEADA_HPP
#define LISTAENCADEADA_HPP
#include "Elemento.hpp"
#include "ListaCheia.h"
#include "PosInvalida.h"
#include "ListaVazia.h"

template<typename T> class ListaEncadeada {
	public:
		ListaEncadeada();
		~ListaEncadeada();

		void adiciona(T*);
		void adicionaNoInicio(T*);
		void adicionaNaPos(T*, int);
 		//void adicionaEmOrdem(T* dado);

		T retira();
		T retiraDoInicio();
		T retiraDaPos(int);
		//T retiraEspecifico(T* dado);

		bool vazia();
        int getTamanho();
        T mostra(int);
       // void destroiLista();
		// int posicao(T* dado);
		// bool contem(T* dado);



	private:
		Elemento<T>* cabeca;
		int tamanho;
};

template <typename T>
ListaEncadeada<T>::ListaEncadeada(){
	cabeca = new Elemento<T>(0,0);
	tamanho = 0;
}

template <typename T>
ListaEncadeada<T>::~ListaEncadeada(){
	//TODO deletar tudo que tem new na lista
   // this->destroiLista();
}

template <typename T>
bool ListaEncadeada<T>::vazia(){
	return tamanho==0;
}

template <typename T>
void ListaEncadeada<T>::adicionaNoInicio(T* dado){
    Elemento<T>* novoDado = new Elemento<T>(dado,cabeca->getProximoElemento());
    if (novoDado != 0) {
        tamanho++;
        cabeca->setProximoElemento(novoDado);
    } else{
        throw ListaCheia();
    }

}

template <typename T>
void ListaEncadeada<T>::adicionaNaPos(T* dado, int pos){
    if(pos > this->tamanho){
        throw PosInvalida();
    } else if(pos == 0){
        this->adicionaNoInicio(dado);
    } else{
        Elemento<T>* novoDado = new Elemento<T>(dado,0);
        if(novoDado != 0){
            //Cria um elemento aux(antetior) que é o elemento, que apontara para o novo elemento
            Elemento<T>* anterior = cabeca->getProximoElemento();
            for(int i = 0; i<pos -1; i++){
                anterior = anterior->getProximoElemento();
            }
            //O proximo elemento do novo dado vai apontar pro mesmo do anterior dele
            novoDado->setProximoElemento(anterior->getProximoElemento());
            //O proximo elemento do anterior vai apontar pro novoDado
            anterior->setProximoElemento(novoDado);
            tamanho++;
        } else {
            throw ListaCheia();
        }
    }
}

template <typename T>
void ListaEncadeada<T>::adiciona(T* dado){
    this->adicionaNaPos(dado, tamanho);
}

template <typename T>
T ListaEncadeada<T>::retiraDoInicio(){
    if(this->vazia()){
        throw ListaVazia();
    } else {
        Elemento<T>* saiu = cabeca->getProximoElemento();
        T retorno = saiu->getInformacao();
        cabeca->setProximoElemento(saiu->getProximoElemento());
        saiu->~Elemento();
        tamanho--;
        return retorno;
    }
}

template <typename T>
T ListaEncadeada<T>::retiraDaPos(int pos){
     if(this->vazia()){
        throw ListaVazia();
    } else if(pos >= this->tamanho){
        //So funcionou assim com esse -1 mt doido
        throw PosInvalida();
    } else if(pos == 0){
        return retiraDoInicio();
    } else{
            T retorno;
            //Cria o anterior e percorre a lista ate anterio apontar para o anterior do elemento a ser eliminado
            Elemento<T>* anterior = cabeca->getProximoElemento();
             for(int i = 0; i<pos -1; i++){
                anterior = anterior->getProximoElemento();
            }
            Elemento<T>* eliminar = anterior->getProximoElemento();
            retorno = eliminar->getInformacao();
            //Aponta o proximo elemento do anterior para o proximo elemento dps do eliminado
            anterior->setProximoElemento(eliminar->getProximoElemento());
            tamanho--;
            eliminar->~Elemento();
            return retorno;
    }
}

template <typename T>
T ListaEncadeada<T>::retira(){
    this->retiraDaPos(tamanho-1);
}   

 template <typename T>
 int ListaEncadeada<T>::getTamanho() {
     return tamanho;
 }

 template <typename T>
 T ListaEncadeada<T>::mostra(int pos){
     if(pos > this->tamanho){
        throw PosInvalida();
    } else if(pos == 0){
        return cabeca->getProximoElemento()->getInformacao();
    } else{
            Elemento<T>* aux = cabeca->getProximoElemento();
            for(int i = 0; i<pos -1; i++){
                aux = aux->getProximoElemento();
            }
            return aux->getProximoElemento()->getInformacao();
     }
}

// template <typename T>
// void destroiLista(){
//     this->~ListaEncadeada();
//     }
// }

#endif

// template<typename T>
// int ListaEncadeada<T>::posicao(T dado) {
//     return 0;
// }

// template<typename T>
// bool ListaEncadeada<T>::contem(T dado) {
//     if(this->vazia()){
//         throw ListaVazia();
//     } else{
//          Elemento<T>* aux = cabeca->getProximoElemento();
//             for(int i = 0; i<tamanho; i++){
//                 if(aux.getInformacao == dado){
//                     return true;
//                 }
//                 aux = aux->getProximoElemento();
//             }
//             return false;
//     }
// }

