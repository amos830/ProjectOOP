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
	test3=getExistingDirectory(this, tr("Choose the directory to store the Equipment File"), "/");
	std::string tests = test3.toStdString() + string("\\") + string("camp_equipment.txt");
	FileHandiler::fileWrite(tests, control->EquipmentList, control->NoOfEquipments, control);
}

