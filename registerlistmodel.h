#include <QAbstractItemModel>
#include <QStringList>


#ifndef REGISTERLISTMODEL_H
#define REGISTERLISTMODEL_H


class RegisterListModel : public QAbstractItemModel
{
    Q_OBJECT


    QStringList StringList;

public:
    RegisterListModel(QObject* parent);


    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &child) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;





public slots:
    void AddString(QString const& data);
};

#endif // REGISTERLISTMODEL_H
