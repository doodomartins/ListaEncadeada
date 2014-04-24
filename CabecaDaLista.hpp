#ifndef CABEDADALISTA_H
#define CABEDADALISTA_H

template <typename T>
class CabecaDaLista {
	public:
		CabecaDaLista(T* dados;);
		~CabecaDaLista();
		int getTamanho();
		T* getDados();

	private:
		T *dados;
		int tamanho;
};

template<typename T>
CabecaDaLista(T *dados){
	this->dados = dados;
}

template<typename T>
~CabecaDaLista(){
}

template<typename T>
int CabecaDaLista::getTamanho(){
	return this->tamanho;
}

template<typename T>
T* CabecaDaLista::getdados(){
	return this->dados;
}
#endif