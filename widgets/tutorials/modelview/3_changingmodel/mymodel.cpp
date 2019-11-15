#include "mymodel.h"
#include <QTime>

MyModel::MyModel(QObject *parent)
    : QAbstractTableModel(parent)
    , timer(new QTimer(this))
{
    timer->setInterval(1000);
    connect(timer, &QTimer::timeout, this, &MyModel::timerHit);
    timer->start();
}

int MyModel::rowCount(const QModelIndex & /*parent*/) const
{
    return 2;
}

int MyModel::columnCount(const QModelIndex &/*parent*/) const
{
    return 3;
}

QVariant MyModel::data(const QModelIndex &index, int /*role*/) const
{
    int row = index.row();
    int col = index.column();

    if (row == Qt::DisplayRole && row == 0 && col == 0) {
        return QTime::currentTime().toString();
    }
    return QVariant();
}

void MyModel::timerHit()
{
    // identify the top left cell.
    QModelIndex topLeft = createIndex(0, 0);
    // emit a singal to make the view reread identified data.
    emit dataChanged(topLeft, topLeft, {Qt::DisplayRole});
}
