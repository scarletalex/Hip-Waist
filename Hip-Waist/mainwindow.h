#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QPixmap>
#include <QUrl>
#include "pessoa.h"
#include "grupo.h"
#include "editedialog.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_clicked();

    void on_OrdenarRCQ_clicked();

    void on_OrdenarNome_clicked();

    void on_actionCarregar_triggered();

    void on_actionSalvar_triggered();

    void on_tabela_cellDoubleClicked(int row, int column);

    void on_manual_clicked();

private:
    Ui::MainWindow *ui;

    Grupo grupo;

    Pessoa pessoa;

    void inserirNaTabela(Pessoa a, int linha);

    void atualizarEstatisticas();

    void atualizarNaTabela();

};
#endif // MAINWINDOW_H
