#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP

template <typename T>
class Elemento {
	public:
<<<<<<< HEAD
		Elemento(T*, Elemento<T>*);
=======
		Elemento(T& informacao, Elemento<T>& proximoElemento);
>>>>>>> 666728a1fb04f3e2de92d687cedbbba6b108710a
		~Elemento();
		Elemento<T>* getProximoElemento();
		void setProximoElemento(Elemento<T>*);
		T getInformacao();
	private:
		Elemento<T>* proximoElemento;
		T* informacao;
};

template <typename T>
<<<<<<< HEAD
Elemento<T>::Elemento(T* informacao, Elemento<T>* proximoElemento)
	: proximoElemento(proximoElemento),
	  informacao(informacao)
=======
Elemento<T>::Elemento(T& informacao, Elemento<T>& proximoElemento)
	: proximoElemento(&proximoElemento),
	  informacao(&informacao)
>>>>>>> 666728a1fb04f3e2de92d687cedbbba6b108710a
	  {}

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
