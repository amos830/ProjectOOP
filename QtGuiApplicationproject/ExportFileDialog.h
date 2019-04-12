#pragma once

#include <QFileDialog>
#include "ui_ExportFileDialog.h"

class ExportFileDialog : public QFileDialog, public Ui::ExportFileDialog
{
	Q_OBJECT

public:
	ExportFileDialog(QWidget *parent = Q_NULLPTR);
	~ExportFileDialog();
};
