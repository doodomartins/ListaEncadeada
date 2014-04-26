#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP

template <typename T>
class Elemento {
	public:
		Elemento(T*, Elemento<T>*);
		~Elemento();
		Elemento<T>* getProximoElemento();
		void setProximoElemento(Elemento<T>*);
		T getInformacao();
	private:
		Elemento<T>* proximoElemento;
		T* informacao;
};

template <typename T>
Elemento<T>::Elemento(T* informacao, Elemento<T>* proximoElemento){
    this->proximoElemento = proximoElemento;
    this->informacao = informacao;
}

template <typename T>
Elemento<T>::~Elemento() {
}

template <typename T>
Elemento<T>* Elemento<T>::getProximoElemento(){
	return this->proximoElemento;
}

template <typename T>
T Elemento<T>::getInformacao() {
	return *(this->informacao);
}

template <typename T>
void Elemento<T>::setProximoElemento(Elemento<T>* elemento){
    this->proximoElemento = elemento;
}
#endif
