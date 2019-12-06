#ifndef GRUPO_H
#define GRUPO_H

#include <QVector>
#include <algorithm>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include "pessoa.h"

class Grupo
{
public:
    Grupo();
    bool existe(Pessoa a);
    double getMaiorRCQ();
    double getMenorRCQ();
    double getMediaRCQ();
    void inserirPessoa(Pessoa a);
    void ordenarPorNome();
    void ordernarPorRCQ();
    int size();
    Pessoa operator[](int indice);
    void salvarDados(QString file);
    void carregarDados(QString file);
    Pessoa pegarPessoa(int p);

    void setpessoa(Pessoa a, int p);
    void excluirpessoa(int p);

private:
    QVector <Pessoa> grupo;
};

bool compararPorRCQ(Pessoa a, Pessoa b);
#endif // GRUPO_H
