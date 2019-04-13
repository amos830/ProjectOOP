#include "ExportFileDialog.h"
#include "FileHandiler.h"
#include "LoanControler.h"
ExportFileDialog::ExportFileDialog(QWidget *parent)
	: QFileDialog(parent)
{
	setupUi(this);
	setFileMode(FileMode::DirectoryOnly);
}

ExportFileDialog::~ExportFileDialog()
{
}

void ExportFileDialog::initialize(LoanControl * arg)
{
	control = arg;
	connect(this, SIGNAL(directoryEntered(QString)), this, SLOT(exports(QString)));
}

void ExportFileDialog::exports(QString test) {
	FileHandiler::fileWrite(control->records,test.toStdString() + "\\" + "loanrecord.txt");
}
