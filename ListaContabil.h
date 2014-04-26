#ifndef LISTACONTABIL_H
#define LISTACONTABIL_H
#include "Lancamento.h"
#include "ListaEncadeada.hpp"

class ListaContabil : public ListaEncadeada<Lancamento>{
    public:
        ListaContabil();
        virtual ~ListaContabil();
    protected:
    private:
};

#endif // LISTACONTABIL_H
