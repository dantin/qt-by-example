#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QTreeView; // forward declarations
class QStandardItemModel;
class QStandardItem;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTreeView *treeView;
    QStandardItemModel *standardModel;
    QList<QStandardItem *> prepareRow(const QString &first,
                                      const QString &second,
                                      const QString &third) const;
};
#endif // MAINWINDOW_H
