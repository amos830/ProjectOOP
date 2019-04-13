#pragma once

#include <QFileDialog>
#include "ui_ExportFileDialog.h"
class LoanControl;
class ExportFileDialog : public QFileDialog, public Ui::ExportFileDialog
{
	Q_OBJECT

public:
	ExportFileDialog(QWidget *parent = Q_NULLPTR);
	~ExportFileDialog();
	void initialize(LoanControl * arg);
	LoanControl* control;
public slots:
	void exports(QString test);
};
