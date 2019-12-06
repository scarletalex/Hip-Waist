#ifndef PESSOA_H
#define PESSOA_H
#include <QString>
#include <QMainWindow>


class Pessoa
{
public:
    Pessoa();

    QString CalcularStatus();

    QString getNome() const;
    bool setNome(const QString &value);

    QString getGenero() const;
    bool setGenero(const QString &value);

    double getCintura() const;
    bool setCintura(double value);

    int getIdade() const;
    void setIdade(int value);

    double getQuadril() const;
    bool setQuadril(double value);

    double getRCQ() const;
    void setRCQ();

private:
    QString nome, genero;
    double cintura, quadril, RCQ;
    int idade;
    float media;
};

#endif // PESSOA_H
