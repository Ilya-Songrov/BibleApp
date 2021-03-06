#include "BibleList.h"

BibleList::BibleList(QObject *parent) : QObject(parent)
{

}

void BibleList::appendElement(const QString &text)
{
    emit preSetItems(1);
    this->list.append(text);
    emit postSetItems();
}

void BibleList::appendList(const QStringList &list)
{
    emit preSetItems(list.size());
    this->list += list;
    emit postSetItems();
}

void BibleList::setList(const QStringList &list)
{
    emit preResetModel();
    this->list.clear();
    this->list = list;
    emit postResetModel();
}


void BibleList::clearListBible()
{
    emit preResetModel();
    this->list.clear();
    emit postResetModel();
}

QString BibleList::getText(const int index) const
{
    return list.at(index);
}

int BibleList::getSize() const
{
    return list.size();
}
