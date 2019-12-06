#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_clicked()
{//cadastrar pessoa
    QString nome = ui->inputNome->text();

    QString genero = ui->inputGenero->currentText();

    QString cintura = ui->inputCintura->text();

    QString quadril = ui->inputQuadril->text();

    QString idade = ui->inputIdade->text();

    pessoa.setIdade(idade.toInt());

    if((pessoa.setNome(nome)) and (pessoa.setGenero(genero)) and (pessoa.setCintura(cintura.toDouble()))and (pessoa.setQuadril(quadril.toDouble())))
    {
       int quantidade_linhas = ui->tabela->rowCount();
       if(grupo.existe(pessoa) == 1){

                QMessageBox::critical(this,"Erro","O Nome já foi cadastrado");
       }else{
                pessoa.setRCQ();

                ui->tabela->insertRow(quantidade_linhas);

                inserirNaTabela(pessoa,quantidade_linhas);

                grupo.inserirPessoa(pessoa);
            }
        atualizarEstatisticas();
        }else{
            QMessageBox::critical(this,"Erro","O nome tem menos de 3 letras ou outros parâmetros estao vazios ou com valores negativos, tente novamente.");

        }

    ui->inputNome->clear();
    ui->inputCintura->clear();
    ui->inputQuadril->clear();


}

void MainWindow::inserirNaTabela(Pessoa a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getNome()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getGenero()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(QString::number(a.getIdade())));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(QString::number(a.getCintura())));
    ui->tabela->setItem(linha,4, new QTableWidgetItem(QString::number(a.getQuadril())));
    ui->tabela->setItem(linha,5, new QTableWidgetItem(QString::number(a.getRCQ())));
    ui->tabela->setItem(linha,6, new QTableWidgetItem(a.CalcularStatus()));
    atualizarEstatisticas();

}

void MainWindow::atualizarEstatisticas()
{
    ui->MaiorRCQ->setText(QString::number(grupo.getMaiorRCQ()));
    ui->MenorRCQ->setText(QString::number(grupo.getMenorRCQ()));
    ui->MediaRCQ->setText(QString::number(grupo.getMediaRCQ()));

}
void MainWindow::atualizarNaTabela(){

    ui->tabela->setRowCount(0);
    for(int i=0; i<grupo.size();i++){
        ui->tabela->insertRow(i);
        inserirNaTabela(grupo[i],i);
    }
}
void MainWindow::on_OrdenarRCQ_clicked()
{
    grupo.ordernarPorRCQ();
    ui->tabela->clearContents();
    for(int i=0; i<grupo.size();i++){
        inserirNaTabela(grupo[i],i);
    }
}

void MainWindow::on_OrdenarNome_clicked()
{
    grupo.ordenarPorNome();
    ui->tabela->clearContents();
    for(int i=0; i<grupo.size();i++){
        inserirNaTabela(grupo[i],i);
    }
}

void MainWindow::on_actionCarregar_triggered()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.csv");
    grupo.carregarDados(filename);

    atualizarNaTabela();
    atualizarEstatisticas();

    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_actionSalvar_triggered()
{
    QString filename;
    filename = QFileDialog::getSaveFileName(this,"Salvar Arquivo","","*.csv");
    grupo.salvarDados(filename);
}

void MainWindow::on_tabela_cellDoubleClicked(int row, int column)
{//leva para editedialog
    column=0;
    EditeDialog edite;
    edite.setpessoa(grupo.pegarPessoa(row), grupo);
    edite.setModal(true);
    edite.exec();

    if(edite.operacao==1){
        grupo.setpessoa(edite.getPessoa(),row);
        atualizarNaTabela();
    }
    if(edite.operacao==2){
        grupo.excluirpessoa(row);

        atualizarNaTabela();
    }
}

void MainWindow::on_manual_clicked()
{

}
