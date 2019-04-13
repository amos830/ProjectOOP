#include "exportEquipmentFile.h"
#include "FileHandiler.h"
#include "LoanControler.h"
#include <QString>
exportEquipmentFile::exportEquipmentFile(QWidget *parent)
	: QFileDialog(parent)
{
	setupUi(this);
	setFileMode(FileMode::DirectoryOnly);
}

exportEquipmentFile::~exportEquipmentFile()
{
}
void exportEquipmentFile::initialize(LoanControl* arg) {
	control = arg;
	connect(this, SIGNAL(directoryEntered(QString)), this, SLOT(exports(QString)));
}

void exportEquipmentFile::exports(QString test) {
	std::string tests = test.toStdString() + string("\\") + string("camp_equipment.txt");
	FileHandiler::fileWrite(tests,control->EquipmentList,control->NoOfEquipments,control);
}
