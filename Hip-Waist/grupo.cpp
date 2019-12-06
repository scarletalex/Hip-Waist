#include "grupo.h"

Grupo::Grupo()
{

}

bool Grupo::existe(Pessoa a)//pessoa cadastrada ja existente.
{
    if(grupo.size() >= 1){
            for(int i = 0; i < grupo.size(); i++){
                if(a.getNome() == grupo[i].getNome()){
                    return 1;
                }
            }
        }
        return 0;

}

double Grupo::getMaiorRCQ()//estatistica de maior rcq
{
    Pessoa *a = std::max_element(grupo.begin(),grupo.end(),compararPorRCQ);
    return a->getRCQ();
}

double Grupo::getMenorRCQ()
{
    Pessoa *a = std::min_element(grupo.begin(),grupo.end(),compararPorRCQ);
    return a->getRCQ();
}

double Grupo::getMediaRCQ()
{
    double RCQ = 0;
        for(auto e : grupo){
            RCQ+=e.getRCQ();
        }
        return RCQ/grupo.size();
}

void Grupo::inserirPessoa(Pessoa a)
{
    grupo.push_back(a);
}

void Grupo::ordenarPorNome()
{
    std::sort(grupo.begin(),grupo.end(),[](Pessoa a, Pessoa b){
            return a.getNome()<b.getNome();
        });
}

void Grupo::ordernarPorRCQ()
{
    std::sort(grupo.begin(),grupo.end(),[](Pessoa a, Pessoa b){
            return a.getRCQ()<b.getRCQ();
        });

}

int Grupo::size()
{
    return grupo.size();
}

Pessoa Grupo::operator[](int indice)
{
    return grupo[indice];
}

bool compararPorRCQ(Pessoa a, Pessoa b)
{
    return a.getRCQ()<b.getRCQ();
}
void Grupo::salvarDados(QString file)
{
    QFile arquivo(file);

    arquivo.open(QIODevice::WriteOnly);

    for(auto a:grupo){
        QString linha = a.getNome() + "," + a.getGenero() + "," + QString::number(a.getIdade())+"," + QString::number(a.getCintura()) + "," + QString::number(a.getQuadril())+ ","+ QString::number(a.getRCQ())+ "," + a.CalcularStatus() + "\n";
        arquivo.write(linha.toLocal8Bit());
    }
    arquivo.close();
}

void Grupo::carregarDados(QString file)
{
    QFile arquivo(file);

        arquivo.open(QIODevice::ReadOnly);
        grupo.clear();
        QString linha;
        QStringList dados;

        while(!arquivo.atEnd()){
            Pessoa temp;
            linha = arquivo.readLine();
            dados = linha.split(",");
            temp.setNome(dados[0]);
            temp.setGenero(dados[1]);
            temp.setIdade(dados[2].toInt());
            temp.setCintura(dados[3].toDouble());
            temp.setQuadril(dados[4].toDouble());
            temp.setRCQ();

            inserirPessoa(temp);
        }
        arquivo.close();

}

Pessoa Grupo::pegarPessoa(int p)
{
    return grupo[p];

}

void Grupo::setpessoa(Pessoa a, int p)
{
    grupo[p]=a;
}

void Grupo::excluirpessoa(int p)
{
    grupo.erase(grupo.begin()+p);
}
