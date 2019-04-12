#include "ExportFileDialog.h"

ExportFileDialog::ExportFileDialog(QWidget *parent)
	: QFileDialog(parent)
{
	setupUi(this);
}

ExportFileDialog::~ExportFileDialog()
{
}
