#ifndef LANCAMENTO_H
#define LANCAMENTO_H


class Lancamento{
    public:
        Lancamento();
        Lancamento(char* nome, double valor);
        virtual ~Lancamento();
        char* nome();
        double valor();
    protected:
    private:
        char* nomee;
        double valorr;
};

#endif // LANCAMENTO_H
