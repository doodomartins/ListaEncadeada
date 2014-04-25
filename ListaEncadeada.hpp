#ifndef LISTAENCADEADA_HPP
#define LISTAENCADEADA_HPP
#include "CabecaDaLista.hpp"
#include "Elemento.hpp"
#include "ListaCheia.h"

template<typename T> class ListaEncadeada {
	public:
		ListaEncadeada();
		~ListaEncadeada();

		//void adiciona(T* dado);
		void adicionaNoInicio(const T& dado);
		//void adicionaNaPos(T* dado);
		//void adicionaEmOrdem(T* dado);

		//T retira();
		//T retiraDoInicio();
		//T retiraDaPos(int pos);
		//T retiraEspecifico(T* dado);

		bool vazia();
		//int posicao(T* dado);
		//bool contem(T* dado);


	private:
		CabecaDaLista<T>* cabeca;
};

template <typename T>
ListaEncadeada<T>::ListaEncadeada(){
	cabeca = new CabecaDaLista<T>();
}

template <typename T>
ListaEncadeada<T>::~ListaEncadeada(){
	//TODO deletar tudo que tem new na lista
}

template <typename T>
bool ListaEncadeada<T>::vazia(){
	return this->cabeca.getTamanho()==0;
}

template <typename T>
void ListaEncadeada<T>::adicionaNoInicio(const T& dado){
    Elemento<T>* novoDado = new Elemento<T>(dado,cabeca->getDados());
    if (novoDado != NULL) {
        cabeca->addTamanho();
        cabeca->setDados(*novoDado);
    } else{
        throw ListaCheia();
    }

}

#endif
