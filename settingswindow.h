#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>


namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

private:
    Ui::SettingsWindow *ui;


    class QListWidgetItem* CreateSettingWidgetItem(QString const& ItemName);

};

#endif // SETTINGS_H
