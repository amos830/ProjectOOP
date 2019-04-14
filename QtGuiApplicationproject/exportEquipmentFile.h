#pragma once
#include <QFileDialog>
#include "ui_exportEquipmentFile.h"
class LoanControl;
class exportEquipmentFile : public QFileDialog, public Ui::exportEquipmentFile
{
	Q_OBJECT

public:
	exportEquipmentFile(QWidget *parent = Q_NULLPTR);
	~exportEquipmentFile();
	void initialize(LoanControl * arg);
	LoanControl* control;
	QString test3;
};
