#include "editedialog.h"
#include "ui_editedialog.h"

EditeDialog::EditeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditeDialog)
{
    ui->setupUi(this);
    operacao=0;

}

EditeDialog::~EditeDialog()
{
    delete ui;
}

void EditeDialog::setpessoa(Pessoa p, Grupo g)
{
    grupo = g;
    pessoa = p;

    ui->inputNome->setText(pessoa.getNome());
    ui->inputGenero->setCurrentText(pessoa.getGenero());
    ui->inputCintura->setText(QString::number(pessoa.getCintura()));
    ui->inputQuadril->setText(QString::number(pessoa.getQuadril()));
    ui->inputIdade->setValue(pessoa.getIdade());
}

void EditeDialog::on_cadastrar_clicked()
{//para edição

    QString nomeant = pessoa.getNome();
    QString nome = ui->inputNome->text();

    QString genero = ui->inputGenero->currentText();

    QString cintura = ui->inputCintura->text();

    QString quadril = ui->inputQuadril->text();

    QString idade = ui->inputIdade->text();

    pessoa.setIdade(idade.toInt());

    if(((pessoa.setNome(nome)) and (pessoa.setGenero(genero)) and (pessoa.setCintura(cintura.toDouble()))and (pessoa.setQuadril(quadril.toDouble()))))
    {
        if(nomeant == pessoa.getNome()){

            pessoa.setRCQ();

            operacao=1;
            close();
        }
        else if(!(grupo.existe(pessoa))){
            pessoa.setRCQ();

            operacao=1;
            close();
        }
        else QMessageBox::critical(this,"Erro","Pessoa já cadastrada!");

    }else{
        QMessageBox::critical(this,"Erro","O parâmetro de nome tem menos de 3 letras ou outros parâmetros estao vazios, tente novamente.");
    }
}

void EditeDialog::on_remover_clicked()
{//para remover
    operacao=2;
    close();
}

void EditeDialog::on_cancelar_clicked()
{//se nao quiser remover ou editar
    close();
}

Pessoa EditeDialog::getPessoa() const
{
    return pessoa;
}

void EditeDialog::setPessoa(const Pessoa &value)
{
    pessoa = value;
}
