#ifndef LISTAENCADEADA_HPP
#define LISTAENCADEADA_HPP
#include "CabecaDaLista.hpp"
#include "ElementoDaLista.hpp"

template<typename T>
class ListaEncadeada {
	public:
		ListaEncadeada();
		~ListaEncadeada();

		//void adiciona(T* dado);
		void adicionaNoInicio(T* dado);
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
		CabecaDaLista cabeca;
};

template <typename T>
ListaEncadeada::ListaEncadeada(){
	cabeca = new CabecaDaLista(NULL);
}

template <typename T>
ListaEncadeada::~ListaEncadeada(){
	//TODO deletar tudo que tem new na lista
}

template <typename T>
bool ListaEncadeada::vazia(){
	return this->cabeca.getTamanho()==0;
}

template <typename T>
void ListaEncadeada::adcionaNoInicio(T* informacao){
    ElementoDaLista<T> *novoDado = new ElementoDaLista<T>(informacao,this->cabeca.getDados());
    if (novoDado != NULL) {
        cabeca.addTamanho();
        cabeca.setDados(novoDado);
    } else{
        throw ListaCheia();
    }

}

#endif
