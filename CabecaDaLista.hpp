#ifndef CABEDADALISTA_H
#define CABEDADALISTA_H
#include "Elemento.hpp"

template <typename T>
class CabecaDaLista {
	public:
		CabecaDaLista();
		~CabecaDaLista();
		int getTamanho();
		const Elemento<T>& getDados();
		void setDados(const Elemento<T>& dados) const;
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
const Elemento<T>& CabecaDaLista<T>::getDados() {
	return *(this->dados);
}

template<typename T>
void CabecaDaLista<T>::setDados(const Elemento<T>& dados) const{
    this->dados = dados;
}

template<typename T>
void CabecaDaLista<T>::addTamanho(){
    this->tamanho++;
}

#endif
