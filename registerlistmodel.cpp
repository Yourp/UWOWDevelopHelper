#include "registerlistmodel.h"



RegisterListModel::RegisterListModel(QObject *parent) : QAbstractItemModel(parent)
{

}

QModelIndex RegisterListModel::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column, (void*)&StringList[row]);
}

QModelIndex RegisterListModel::parent(const QModelIndex &child) const
{
    return QModelIndex();
}

int RegisterListModel::rowCount(const QModelIndex &parent) const
{
    return StringList.size();
}

int RegisterListModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant RegisterListModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        return StringList.at(index.row());
    }
    return QVariant();
}

void RegisterListModel::AddString(const QString &data)
{
    StringList.append(data);
    emit layoutChanged();
}
