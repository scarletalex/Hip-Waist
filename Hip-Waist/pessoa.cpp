#include "pessoa.h"
#include <QDebug>

Pessoa::Pessoa()
{

}

QString Pessoa::CalcularStatus()
{
    QString status;
    if(idade<30){
        if(genero=="feminino"){
            if(RCQ<0.71) status = "Baixo";

            if((RCQ>=0.71) and (RCQ<=0.77))status=  "Moderado";

            if((RCQ>0.77) and (RCQ<=0.82))status=  "Alto";

            if(RCQ>0.82)status=  "Muito Alto";
        }

        if(genero=="masculino"){
            if(RCQ<0.83)status=  "Baixo";

            if(RCQ>=0.83 and RCQ<=0.88)status=  "Moderado";

            if((RCQ>0.88) and (RCQ<=0.94))status=  "Alto";

            if(RCQ>0.95) status=  "Muito Alto";
        }
    }

    if(idade>29 and idade<40){
        if(genero=="feminino"){
            if(RCQ<0.72) status=  "Baixo";

            if((RCQ>=0.72) and (RCQ<=0.78)) status=  "Moderado";

            if((RCQ>0.78) and (RCQ<=0.84)) status=  "Alto";

            if(RCQ>0.84)status=  "Muito Alto";
        }

        if(genero=="masculino"){
            if(RCQ<0.84)status=   "Baixo";

            if((RCQ>=0.84) and (RCQ<=0.91))status=   "Moderado";

            if((RCQ>0.91) and (RCQ<=0.96))status=   "Alto";

            if(RCQ>0.96)status=  "Muito Alto";
        }
    }

    if(idade>39 and idade<50){
        if(genero=="feminino"){
            if(RCQ<0.73)status=  "Baixo";

            if((RCQ>=0.73) and (RCQ<=0.79))status=  "Moderado";

            if((RCQ>0.79) and (RCQ<=0.87))status=  "Alto";

            if(RCQ>0.87)status=  "Muito Alto";
        }

        if(genero=="masculino"){
            if(RCQ<0.88) status=  "Baixo";

            if((RCQ>=0.88) and (RCQ<=0.95)) status=  "Moderado";

            if((RCQ>0.95) and (RCQ<=1))  status=  "Alto";

            if(RCQ>1)status= "Muito Alto";
        }
    }

    if(idade>49 and idade<60){
        if(genero=="feminino"){
            if(RCQ<0.74)status= "Baixo";

            if((RCQ>=0.74) and (RCQ<=0.81))status= "Moderado";

            if((RCQ>0.81) and (RCQ<=0.88))status= "Alto";

            if(RCQ>0.88) status=  "Muito Alto";
        }

        if(genero=="masculino"){
            if(RCQ<0.90)status=  "Baixo";

            if((RCQ>=0.90) and (RCQ<=0.96))status=  "Moderado";

            if((RCQ>0.96) and (RCQ<=1.02))status=  "Alto";

            if(RCQ>1.02) status=  "Muito Alto";
        }
    }

    if(idade>59){
        if(genero=="feminino"){
            if(RCQ<0.76)status=  "Baixo";

            if((RCQ>=0.76) and (RCQ<=0.83))status=  "Moderado";

            if((RCQ>0.83) and (RCQ<=0.90))status=  "Alto";

            if(RCQ>0.90)status=  "Muito Alto";

        }
        if(genero=="masculino"){
            if(RCQ<0.91) status=  "Baixo";

            if((RCQ>=0.91) and (RCQ<=0.98))status=  "Moderado";

            if((RCQ>0.98) and (RCQ<=1.03))status=  "Alto";

            if(RCQ>1.03) status=  "Muito Alto";
        }
    }
    return status;
}

QString Pessoa::getNome() const
{
    return nome;
}
bool Pessoa::setNome(const QString &value)
{
    if(value.size()>3){
        nome = value;
        return true;
    }
    else{
        return false;//cadastramento vazio
    }
}
QString Pessoa::getGenero() const
{
    return genero;
}
bool Pessoa::setGenero(const QString &value)
{
    if(value!=""){
        genero = value;
        return true;
    }
    else{
        return false;
    }
}
double Pessoa::getCintura() const
{
    return cintura;
}
bool Pessoa::setCintura(double value)
{
    if(value>0){
        cintura = value;
        return true;
    }
    else{
        return false;
    }
}
int Pessoa::getIdade() const
{
    return idade;
}
void Pessoa::setIdade(int value)
{
    idade = value;
}
double Pessoa::getQuadril() const
{
    return quadril;
}
bool Pessoa::setQuadril(double value)
{
    if(value>0){
        quadril = value;
        return true;
    }
    else{
        return false;
    }
}
void Pessoa::setRCQ()
{
    RCQ = cintura/quadril;
}
double Pessoa::getRCQ() const
{
    return RCQ;
}


