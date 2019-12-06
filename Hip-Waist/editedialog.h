#ifndef EDITEDIALOG_H
#define EDITEDIALOG_H

#include <QDialog>
#include "pessoa.h"
#include "grupo.h"
#include <QMessageBox>

namespace Ui {
class EditeDialog;
}

class EditeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditeDialog(QWidget *parent = nullptr);
    ~EditeDialog();

    void setpessoa(Pessoa p, Grupo g);

    int operacao;

    Pessoa getPessoa() const;

    void setPessoa(const Pessoa &value);

private slots:

    void on_cadastrar_clicked();

    void on_remover_clicked();

    void on_cancelar_clicked();

private:
    Ui::EditeDialog *ui;

    Pessoa pessoa;
    Grupo grupo;
};

#endif // EDITEDIALOG_H
