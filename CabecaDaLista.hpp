#ifndef CABEDADALISTA_H
#define CABEDADALISTA_H

template <typename T>
class CabecaDaLista {
	public:
		CabecaDaLista(T* dados);
		~CabecaDaLista();
		int getTamanho();
		T* getDados();
		void setDados();
		void addTamanho();

	private:
		T* dados;
		int tamanho;
};

template<typename T>
CabecaDaLista::CabecaDaLista(){
	dados = NULL;

}

template<typename T>
CabecaDaLista::~CabecaDaLista(){
}

template<typename T>
int CabecaDaLista::getTamanho(){
	return this->tamanho;
}

template<typename T>
T* CabecaDaLista::getdados(){
	return this->dados;
}

template<typename T>
void CabecaDaLista::setDados(T* dados){
    this->dados = dados;
}

template<typename T>
void CabecaDaLista::addTamanho(){
    this->tamanho++;
}

#endif
