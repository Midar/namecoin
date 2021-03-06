#include "config.h"

#include "transactiondescdialog.h"
#include "transactiondescdialog.ui.h"
#include "transactiontablemodel.h"
#include "guiconstants.h"

#include <QModelIndex>

TransactionDescDialog::TransactionDescDialog(const QModelIndex &idx, QWidget *parent) :
    QDialog(parent, DIALOGWINDOWHINTS),
    ui(new Ui::TransactionDescDialog)
{
    ui->setupUi(this);
    QString desc = idx.data(TransactionTableModel::LongDescriptionRole).toString();
    ui->detailText->setHtml(desc);
}

TransactionDescDialog::~TransactionDescDialog()
{
    delete ui;
}
