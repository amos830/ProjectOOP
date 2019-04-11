#include "ImportequipmentMenu.h"
#include "FileHandiler.h"
#include "QtAdminMenu.h"
#include <QFileDialog>
#include <QTextStream>
#include "ErrorAlert.h"

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
	Title->setText("Drag And Drop Equipment File into the box below");
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
	hide();
	if(DisplayFile->text()!="")
		if (FileHandiler::fileRead(DisplayFile->text().toStdString(), Parent->loanControler->EquipmentList, Parent->loanControler->NoOfEquipments, Parent->loanControler))
		{
			ErrorAlert Error;
			Error.initialize(false,"Import Failed, Reverting to original Equipment file",nullptr);
			Error.exec();
			FileHandiler::fileRead(Parent->loanControler->EquipmentList, Parent->loanControler->NoOfEquipments, Parent->loanControler);
		}
}
void ImportequipmentMenu::selectFile(){
	QString s = QFileDialog::getOpenFileName(this, tr("Open"), "/", "TXT files(*txt)");
	DisplayFile->setText(s);
}

ImportUserMenu::~ImportUserMenu()
{
}

void ImportUserMenu::initialize(QtAdminMenu * arg)
{
	Parent = arg;
	Title->setText("Drag And Drop User File into box below");
}

void ImportUserMenu::updatePreview()
{
	QString directory(DisplayFile->text());
	QFile tempFile(directory);
	tempFile.open(QIODevice::ReadOnly);
	QTextStream textStream(&tempFile);
	Preview->setText(directory + "\n\n" + textStream.readAll());
	tempFile.close();
}

void ImportUserMenu::importEquipment()
{
	hide();
	if (DisplayFile->text() != "")
		if (FileHandiler::fileRead(DisplayFile->text().toStdString(), Parent->loanControler->UserList, Parent->loanControler->NoOfUsers, Parent->loanControler))
		{
			ErrorAlert Error;
			Error.initialize(false, "Import Failed, Reverting to original User file", nullptr);
			Error.exec();
			FileHandiler::fileRead(Parent->loanControler->UserList, Parent->loanControler->NoOfUsers, Parent->loanControler);
		}
}
