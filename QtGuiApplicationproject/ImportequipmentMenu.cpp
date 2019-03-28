#include "ImportequipmentMenu.h"
#include "FileHandiler.h"
#include "QtAdminMenu.h"
#include <QFileDialog>
#include <QTextStream>

ImportequipmentMenu::ImportequipmentMenu(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	setAcceptDrops(true);
}

ImportequipmentMenu::~ImportequipmentMenu()
{
}
void ImportequipmentMenu::initialize(QtAdminMenu * arg)
{
	Parent = arg;
}
void ImportequipmentMenu::updatePreview()
{
	QString directory(DisplayFile->text());
	QFile tempFile(directory);
	tempFile.open(QIODevice::ReadOnly);
	QTextStream textStream(&tempFile);
	Preview->setText(directory + "\n\n" + textStream.readAll());
	tempFile.close();
}
void ImportequipmentMenu::importEquipment()
{
	FileHandiler::fileRead(DisplayFile->text().toStdString(), Parent->loanControler->EquipmentList, Parent->loanControler->NoOfEquipments, Parent->loanControler);
	hide();
}
void ImportequipmentMenu::selectFile(){
	QString s = QFileDialog::getOpenFileName(this, tr("Open"), "/", "TXT files(*txt)");
	DisplayFile->setText(s);
}
