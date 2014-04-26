#ifndef CABEDADALISTA_H
#define CABEDADALISTA_H
#include "Elemento.hpp"

template <typename T>
class CabecaDaLista {
	public:
		CabecaDaLista();
		~CabecaDaLista();
		int getTamanho();
		Elemento<T>& getDados() const;
		void setDados(Elemento<T>& dados);
		void addTamanho();

	private:
		Elemento<T>* dados;
		int tamanho;
};

template<typename T>
CabecaDaLista<T>::CabecaDaLista(){
	dados = NULL;
	tamanho = 0;

}

template<typename T>
CabecaDaLista<T>::~CabecaDaLista(){
}

template<typename T>
int CabecaDaLista<T>::getTamanho(){
	return this->tamanho;
}

template<typename T>
Elemento<T>& CabecaDaLista<T>::getDados() const {
	return *(this->dados);
}

template<typename T>
void CabecaDaLista<T>::setDados(Elemento<T>& dados){
    this->dados = &dados;
}

template<typename T>
void CabecaDaLista<T>::addTamanho(){
    this->tamanho++;
}

#endif
