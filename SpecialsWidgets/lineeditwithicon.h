#ifndef LINEEDITWITHICON_H
#define LINEEDITWITHICON_H

#include <QLineEdit>
#include <QIcon>


class LineEditWithIcon : public QLineEdit
{
public:

    LineEditWithIcon(QWidget *parent);
    void SetIcon(QIcon icon);

protected:

    virtual void paintEvent(QPaintEvent *event) override;

private:

    QIcon IconComponent;
};

#endif // LINEEDITWITHICON_H
