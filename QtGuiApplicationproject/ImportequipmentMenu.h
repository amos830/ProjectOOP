#pragma once

#include <QFileDialog>
#include "ui_ImportEquipmentMenu.h"

class QtAdminMenu;
class ImportequipmentMenu : public QDialog,public Ui::ImportequipmentMenu
{
	Q_OBJECT

public:
	ImportequipmentMenu(QWidget *parent = Q_NULLPTR);
	~ImportequipmentMenu();
	QtAdminMenu* Parent;
	void initialize(QtAdminMenu* arg);
public slots:
	void selectFile();
	void updatePreview();
	void importEquipment();
};
class ImportUserMenu : public QDialog, public Ui::ImportequipmentMenu
{
	Q_OBJECT

public:
	ImportUserMenu(QWidget *parent = Q_NULLPTR);
	~ImportUserMenu();
	QtAdminMenu* Parent;
	void initialize(QtAdminMenu* arg);
public slots:
	void selectFile();
	void updatePreview();
	void importEquipment();
};
