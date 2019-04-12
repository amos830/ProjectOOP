#include "exportEquipmentFile.h"
#include "FileHandiler.h"
#include "LoanControler.h"
exportEquipmentFile::exportEquipmentFile(QWidget *parent)
	: QFileDialog(parent)
{
	setupUi(this);
	setFileMode(FileMode::DirectoryOnly);
	connect(this, SIGNAL(directoryEntered(QString)), this, SLOT(export(QString)));
}

exportEquipmentFile::~exportEquipmentFile()
{
}
void exportEquipmentFile::initialize(LoanControl* arg) {
	control = arg;
}
void exportEquipmentFile::export(QString test) {
	std::string tests = test.toStdString() + string("\\") + string("camp_equipment.txt");
	FileHandiler::fileWrite(tests,control->EquipmentList,control->NoOfEquipments,control);
}
