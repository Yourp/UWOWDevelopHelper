#include "lineeditwithicon.h"
#include <QPainter>

LineEditWithIcon::LineEditWithIcon(QWidget *parent) : QLineEdit(parent)
{
    SetIcon(QIcon("Icons/ok.png"));
}

void LineEditWithIcon::SetIcon(QIcon icon)
{
    IconComponent = icon;
    if (IconComponent.isNull())
        setTextMargins(1, 1, 1, 1);
    else
        setTextMargins(1, 1, 20, 1);
}

void LineEditWithIcon::paintEvent(QPaintEvent * event)
{
    QLineEdit::paintEvent(event);

    if (!IconComponent.isNull())
    {
        QPainter painter(this);
        QPixmap pxm = IconComponent.pixmap(height() - 6, height() - 6);
        int x = width() - pxm.width() - 3;

        painter.drawPixmap(x, 3, pxm);
//        painter.setPen(QColor("lightgrey"));
//        painter.drawLine(cx + 2, 3, cx + 2, height() - 4);
    }
}
