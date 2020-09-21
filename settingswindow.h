#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>


namespace Ui {
class SettingsWindow;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

private:
    Ui::SettingsWindow *ui;

};

#endif // SETTINGS_H
