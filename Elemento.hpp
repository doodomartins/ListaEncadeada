#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP

template <typename T>
class Elemento {
	public:
		Elemento(const T& informacao, const Elemento<T>& proximoElemento);
		~Elemento();
		Elemento<T>* getProximoElemento() const;
		T getInformacao() const;
	private:
		const Elemento<T>& proximoElemento;
		const T& informacao;
};

template <typename T>
Elemento<T>::Elemento(const T& informacao, const Elemento<T>& proximoElemento)
	: proximoElemento(proximoElemento),
	  informacao(informacao)
	  {}

template <typename T>
Elemento<T>::~Elemento() {
}

template <typename T>
Elemento<T>* Elemento<T>::getProximoElemento() const {
	return this->proximoElemento;
}

template <typename T>
T Elemento<T>::getInformacao() const {
	return *(this->informacao);
}

#endif
