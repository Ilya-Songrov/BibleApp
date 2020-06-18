#include "ProviderQml.h"

ProviderQml::ProviderQml(QObject *parent) : QObject(parent)
{

}

bool ProviderQml::getDebug() const
{
    bool isDebug { false };
#ifdef QT_DEBUG
    isDebug = true;
#endif
    return true;
}

QColor ProviderQml::getColorBackground()
{
    return QColor("#292420");
}
