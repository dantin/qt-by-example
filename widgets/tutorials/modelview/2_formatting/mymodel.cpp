#include "mymodel.h"

#include <QFont>
#include <QBrush>
#include <QDebug>

MyModel::MyModel(QObject *parent)
    : QAbstractTableModel(parent)
{
}

int MyModel::rowCount(const QModelIndex &parent) const
{
    return 2;
}

int MyModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant MyModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int col = index.column();
    // generate a log message when this method gets called
    qDebug() << QString("row %1, col %2, role %3")
                .arg(row).arg(col).arg(role);

    switch (role) {
    case Qt::DisplayRole:
        if (row == 0 && col == 1) return QString("<--left");
        if (row == 1 && col == 1) return QString("right-->");

        return QString("Row %1, Column %2").arg(row + 1).arg(col + 1);
    case Qt::FontRole:
        // change font only for cell(0, 0)
        if (row == 0 && col == 0) {
            QFont boldFont;
            boldFont.setBold(true);
            return boldFont;
        }
        break;
    case Qt::BackgroundRole:
        // change background only for cell(1, 2)
        if (row == 1 && col == 2) {
            return QBrush(Qt::red);
        }
        break;
    case Qt::TextAlignmentRole:
        // change text alignment only for cell(1, 1)
        if (row == 1 && col == 1) {
            return Qt::AlignRight + Qt::AlignVCenter;
        }
        break;
    case Qt::CheckStateRole:
        // add a checkbox to cell(1, 0)
        if (row == 1 && col == 0) {
            return Qt::Checked;
        }
        break;
    }

    return QVariant();
}
