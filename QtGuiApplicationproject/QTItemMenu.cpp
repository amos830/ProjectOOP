#include "QTItemMenu.h"
#include <QDate>
QTItemMenu::QTItemMenu(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

QTItemMenu::~QTItemMenu()
{
	delete[] tents;
	delete[] stoves;
	delete[] lanterns;
	
}
void QTItemMenu::initialize(LoanControl * arg)
{
	Parent = arg;
	updateTable();
}
void QTItemMenu::updateTable()
{
	tentTable = new QStandardItemModel((Parent->NoOfTents), 11, this);
	tentTable->setHorizontalHeaderItem(0, new QStandardItem(tr("Item Code")));
	tentTable->setHorizontalHeaderItem(1, new QStandardItem(tr("Name")));
	tentTable->setHorizontalHeaderItem(2, new QStandardItem(tr("Brand")));
	tentTable->setHorizontalHeaderItem(3, new QStandardItem(tr("Date of Purchase")));
	tentTable->setHorizontalHeaderItem(4, new QStandardItem(tr("Condition")));//admin
	tentTable->setHorizontalHeaderItem(5, new QStandardItem(tr("Status")));//admin
	tentTable->setHorizontalHeaderItem(6, new QStandardItem(tr("Number Of People Use")));
	tentTable->setHorizontalHeaderItem(7, new QStandardItem(tr("Type")));
	tentTable->setHorizontalHeaderItem(8, new QStandardItem(tr("Number Of Doors")));
	tentTable->setHorizontalHeaderItem(9, new QStandardItem(tr("Double-layer?")));
	tentTable->setHorizontalHeaderItem(10, new QStandardItem(tr("Colour")));
	tents = Parent->getEquipment("tent", true).List;
	for (int i = 0; i < Parent->NoOfTents; i++) {
		tentTable->setItem(i, 0, new QStandardItem(QString::fromStdString(tents[i]->getItemID())));
		tentTable->setItem(i, 1, new QStandardItem(QString::fromStdString(tents[i]->getName())));
		tentTable->setItem(i, 2, new QStandardItem(QString::fromStdString(tents[i]->getBrand())));
		tentTable->setItem(i, 3, new QStandardItem(QDate::fromString(QString::fromStdString(tents[i]->getDateOfPurchase()),"ddMMyyyy").toString("dd-MM-yyyy")));
		tentTable->setItem(i, 4, new QStandardItem(QString::fromStdString(tents[i]->getCondition())));
		tentTable->setItem(i, 5, new QStandardItem(QString::fromStdString(tents[i]->getStatus())));
		tentTable->setItem(i, 6, new QStandardItem(QString::number(((Tent*)(tents[i]))->getNoOfPeople())));
		tentTable->setItem(i, 7, new QStandardItem(QString::fromStdString(((Tent*)(tents[i]))->getItemType())));
		tentTable->setItem(i, 8, new QStandardItem(QString::number(((Tent*)(tents[i]))->getNoOfDoor())));
		tentTable->setItem(i, 9, new QStandardItem(((Tent*)(tents[i]))->getDoubleLayer() ? QString("Yes") : QString("No")));
		tentTable->setItem(i, 10, new QStandardItem(QString::fromStdString(((Tent*)(tents[i]))->getColor())));
	}
	ui.Tent_Table->setModel(tentTable);
	ui.Tent_Table->horizontalHeader()->setStretchLastSection(true);
	ui.Tent_Table->resizeColumnsToContents();
	ui.Tent_Table->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.Tent_Table->verticalHeader()->hide();
	ui.Tent_Table->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.Tent_Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
	stoveTable = new QStandardItemModel(Parent->NoOfStoves, 8, this);
	stoveTable->setHorizontalHeaderItem(0, new QStandardItem(tr("Item Code")));
	stoveTable->setHorizontalHeaderItem(1, new QStandardItem(tr("Name")));
	stoveTable->setHorizontalHeaderItem(2, new QStandardItem(tr("Brand")));
	stoveTable->setHorizontalHeaderItem(3, new QStandardItem(tr("Date of Purchase")));
	stoveTable->setHorizontalHeaderItem(4, new QStandardItem(tr("Condition")));//admin
	stoveTable->setHorizontalHeaderItem(5, new QStandardItem(tr("Status")));//admin
	stoveTable->setHorizontalHeaderItem(6, new QStandardItem(tr("Type")));
	stoveTable->setHorizontalHeaderItem(7, new QStandardItem(tr("Fuel Type")));
	stoves = Parent->getEquipment("stove", true).List;
	for (int i = 0; i < Parent->NoOfStoves; i++) {
		stoveTable->setItem(i, 0, new QStandardItem(QString::fromStdString(stoves[i]->getItemID())));
		stoveTable->setItem(i, 1, new QStandardItem(QString::fromStdString(stoves[i]->getName())));
		stoveTable->setItem(i, 2, new QStandardItem(QString::fromStdString(stoves[i]->getBrand())));
		stoveTable->setItem(i, 3, new QStandardItem(QDate::fromString(QString::fromStdString(stoves[i]->getDateOfPurchase()), "ddMMyyyy").toString("dd-MM-yyyy")));
		stoveTable->setItem(i, 4, new QStandardItem(QString::fromStdString(stoves[i]->getCondition())));
		stoveTable->setItem(i, 5, new QStandardItem(QString::fromStdString(stoves[i]->getStatus())));
		stoveTable->setItem(i, 6, new QStandardItem(QString::fromStdString(((Stove*)(stoves[i]))->getItemType())));
		stoveTable->setItem(i, 7, new QStandardItem(QString::fromStdString(((Stove*)(stoves[i]))->getFuelType())));
	}
	ui.Stove_Table->setModel(stoveTable);
	ui.Stove_Table->horizontalHeader()->setStretchLastSection(true);
	ui.Stove_Table->resizeColumnsToContents();
	ui.Stove_Table->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.Stove_Table->verticalHeader()->hide();
	ui.Stove_Table->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.Stove_Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
	lanternTable = new QStandardItemModel(Parent->NoOfLanterns, 9, this);
	lanternTable->setHorizontalHeaderItem(0, new QStandardItem(tr("Item Code")));
	lanternTable->setHorizontalHeaderItem(1, new QStandardItem(tr("Name")));
	lanternTable->setHorizontalHeaderItem(2, new QStandardItem(tr("Brand")));
	lanternTable->setHorizontalHeaderItem(3, new QStandardItem(tr("Date of Purchase")));
	lanternTable->setHorizontalHeaderItem(4, new QStandardItem(tr("Condition")));//admin
	lanternTable->setHorizontalHeaderItem(5, new QStandardItem(tr("Status")));//admin
	lanternTable->setHorizontalHeaderItem(6, new QStandardItem(tr("Type")));
	lanternTable->setHorizontalHeaderItem(7, new QStandardItem(tr("Lantern Size")));
	lanternTable->setHorizontalHeaderItem(8, new QStandardItem(tr("Fuel Type")));

	lanterns = Parent->getEquipment("lantern", true).List;
	for (int i = 0; i < Parent->NoOfLanterns; i++) {
		lanternTable->setItem(i, 0, new QStandardItem(QString::fromStdString(lanterns[i]->getItemID())));
		lanternTable->setItem(i, 1, new QStandardItem(QString::fromStdString(lanterns[i]->getName())));
		lanternTable->setItem(i, 2, new QStandardItem(QString::fromStdString(lanterns[i]->getBrand())));
		lanternTable->setItem(i, 3, new QStandardItem(QDate::fromString(QString::fromStdString(lanterns[i]->getDateOfPurchase()),"ddMMyyyy").toString("dd-MM-yyyy")));
		lanternTable->setItem(i, 4, new QStandardItem(QString::fromStdString(lanterns[i]->getCondition())));
		lanternTable->setItem(i, 5, new QStandardItem(QString::fromStdString(lanterns[i]->getStatus())));
		lanternTable->setItem(i, 6, new QStandardItem(QString::fromStdString(((Lantern*)(lanterns[i]))->getItemType())));
		lanternTable->setItem(i, 7, new QStandardItem(QString::fromStdString(((Lantern*)(lanterns[i]))->getLanternSize())));
		lanternTable->setItem(i, 8, new QStandardItem(QString::fromStdString(((Lantern*)(lanterns[i]))->getFuelType())));
	}
	ui.Lantern_Table->setModel(lanternTable);
	ui.Lantern_Table->horizontalHeader()->setStretchLastSection(true);
	ui.Lantern_Table->resizeColumnsToContents();
	ui.Lantern_Table->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.Lantern_Table->verticalHeader()->hide();
	ui.Lantern_Table->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.Lantern_Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
	//QDate::fromString(QString::fromStdString(lanterns[i]->getDateOfPurchase()),"ddmmyyyy").toString("dd-mm-yyyy")
}
void QTItemMenu::editConditionTent(QModelIndex info) {
	ChangeConditionUI SelectMenu = new ChangeConditionUI(this);
	SelectMenu.setData(tents[info.row()]);
	SelectMenu.exec();
	updateTable();
}
void QTItemMenu::editConditionStove(QModelIndex info) {
	ChangeConditionUI SelectMenu = new ChangeConditionUI(this);
	SelectMenu.setData(stoves[info.row()]);
	SelectMenu.exec();
	updateTable();
}
void QTItemMenu::editConditionLantern(QModelIndex info) {
	ChangeConditionUI SelectMenu = new ChangeConditionUI(this);
	SelectMenu.setData(lanterns[info.row()]);
	SelectMenu.exec();
	updateTable();
}

ChangeConditionUI::ChangeConditionUI(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	ConditionCombo->addItem("good");
	ConditionCombo->addItem("damaged");
	ConditionCombo->addItem("being repaired");
	ConditionCombo->addItem("disposed");
}

ChangeConditionUI::~ChangeConditionUI()
{
}
void ChangeConditionUI::setData(Equipment * Item)
{
	Target = Item;
	QString ini = QString::fromStdString(Target->getCondition());
	ConditionCombo->setCurrentIndex(ConditionCombo->findText(ini));
	Title->setText(QString::fromStdString("Change Condition For " + Target->getItemID() + " (" + Target->getType() + ")"));
}
void ChangeConditionUI::modifyCondition() {
	Target->setCondition(ConditionCombo->currentText().toStdString());
	hide();
}
