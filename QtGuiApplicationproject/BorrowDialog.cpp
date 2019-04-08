#include "BorrowDialog.h"
#include "LoanControler.h"
BorrowDialog::BorrowDialog(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

BorrowDialog::~BorrowDialog()
{
	delete[] tents;
}

void BorrowDialog::initialize(LoanControl * arg)
{
	loanController = arg;
	updateTable();
}
void BorrowDialog::updateTable() {
	EquipmentResult tentResult = loanController->getEquipment("tent", false);
	tentTable = new QStandardItemModel((tentResult.size), 9, this);
	tentTable->setHorizontalHeaderItem(0, new QStandardItem(tr("Item Code")));
	tentTable->setHorizontalHeaderItem(1, new QStandardItem(tr("Name")));
	tentTable->setHorizontalHeaderItem(2, new QStandardItem(tr("Brand")));
	tentTable->setHorizontalHeaderItem(3, new QStandardItem(tr("Number Of People Use")));
	tentTable->setHorizontalHeaderItem(4, new QStandardItem(tr("Type")));
	tentTable->setHorizontalHeaderItem(5, new QStandardItem(tr("Number Of Doors")));
	tentTable->setHorizontalHeaderItem(6, new QStandardItem(tr("Double-layer?")));
	tentTable->setHorizontalHeaderItem(7, new QStandardItem(tr("Colour")));
	tentTable->setHorizontalHeaderItem(8, new QStandardItem(tr("Date of Purchase")));
	tents = tentResult.List;
	for (int i = 0; i < tentResult.size; i++) {
		tentTable->setItem(i, 0, new QStandardItem(QString::fromStdString(tents[i]->getItemID())));
		tentTable->setItem(i, 1, new QStandardItem(QString::fromStdString(tents[i]->getName())));
		tentTable->setItem(i, 2, new QStandardItem(QString::fromStdString(tents[i]->getBrand())));
		tentTable->setItem(i, 3, new QStandardItem(QString::number(((Tent*)(tents[i]))->getNoOfPeople())));
		tentTable->setItem(i, 4, new QStandardItem(QString::fromStdString(((Tent*)(tents[i]))->getItemType())));
		tentTable->setItem(i, 5, new QStandardItem(QString::number(((Tent*)(tents[i]))->getNoOfDoor())));
		tentTable->setItem(i, 6, new QStandardItem(((Tent*)(tents[i]))->getDoubleLayer() ? QString("Yes") : QString("No")));
		tentTable->setItem(i, 7, new QStandardItem(QString::fromStdString(((Tent*)(tents[i]))->getColor())));
		tentTable->setItem(i, 8, new QStandardItem(QString::fromStdString(tents[i]->getDateOfPurchase())));
	}
	tentTableView->setModel(tentTable);
	tentTableView->horizontalHeader()->setStretchLastSection(true);
	tentTableView->resizeColumnsToContents();
	tentTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	tentTableView->verticalHeader()->hide();
	tentTableView->setSelectionMode(QAbstractItemView::SingleSelection);
	tentTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	
	EquipmentResult stoveResult = loanController->getEquipment("stove", false);
	stoveTable = new QStandardItemModel((stoveResult.size), 6, this);
	stoveTable->setHorizontalHeaderItem(0, new QStandardItem(tr("Item Code")));
	stoveTable->setHorizontalHeaderItem(1, new QStandardItem(tr("Name")));
	stoveTable->setHorizontalHeaderItem(2, new QStandardItem(tr("Brand")));
	stoveTable->setHorizontalHeaderItem(3, new QStandardItem(tr("Type")));
	stoveTable->setHorizontalHeaderItem(4, new QStandardItem(tr("Fuel Type")));
	stoveTable->setHorizontalHeaderItem(5, new QStandardItem(tr("Date of Purchase")));
	stoves = stoveResult.List;
	for (int i = 0; i < stoveResult.size; i++) {
		stoveTable->setItem(i, 0, new QStandardItem(QString::fromStdString(stoves[i]->getItemID())));
		stoveTable->setItem(i, 1, new QStandardItem(QString::fromStdString(stoves[i]->getName())));
		stoveTable->setItem(i, 2, new QStandardItem(QString::fromStdString(stoves[i]->getBrand())));
		stoveTable->setItem(i, 3, new QStandardItem(QString::fromStdString(((Stove*)(stoves[i]))->getItemType())));
		stoveTable->setItem(i, 4, new QStandardItem(QString::fromStdString(((Stove*)(stoves[i]))->getFuelType())));
		stoveTable->setItem(i, 5, new QStandardItem(QString::fromStdString(stoves[i]->getDateOfPurchase())));

	}
	StoveTableView->setModel(stoveTable);
	StoveTableView->horizontalHeader()->setStretchLastSection(true);
	StoveTableView->resizeColumnsToContents();
	StoveTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	StoveTableView->verticalHeader()->hide();
	StoveTableView->setSelectionMode(QAbstractItemView::SingleSelection);
	StoveTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	EquipmentResult lanternResult = loanController->getEquipment("lantern", false);
	lanternTable = new QStandardItemModel((lanternResult.size), 7, this);
	lanternTable->setHorizontalHeaderItem(0, new QStandardItem(tr("Item Code")));
	lanternTable->setHorizontalHeaderItem(1, new QStandardItem(tr("Name")));
	lanternTable->setHorizontalHeaderItem(2, new QStandardItem(tr("Brand")));
	lanternTable->setHorizontalHeaderItem(3, new QStandardItem(tr("Type")));
	lanternTable->setHorizontalHeaderItem(4, new QStandardItem(tr("Fuel Type")));
	lanternTable->setHorizontalHeaderItem(5, new QStandardItem(tr("Lantern Size")));
	lanternTable->setHorizontalHeaderItem(6, new QStandardItem(tr("Date of Purchase")));
	lanterns = lanternResult.List;
	for (int i = 0; i < lanternResult.size; i++) {
		lanternTable->setItem(i, 0, new QStandardItem(QString::fromStdString(lanterns[i]->getItemID())));
		lanternTable->setItem(i, 1, new QStandardItem(QString::fromStdString(lanterns[i]->getName())));
		lanternTable->setItem(i, 2, new QStandardItem(QString::fromStdString(lanterns[i]->getBrand())));
		lanternTable->setItem(i, 3, new QStandardItem(QString::fromStdString(((Lantern*)(lanterns[i]))->getItemType())));
		lanternTable->setItem(i, 4, new QStandardItem(QString::fromStdString(((Lantern*)(lanterns[i]))->getFuelType())));
		lanternTable->setItem(i, 5, new QStandardItem(QString::fromStdString(((Lantern*)(lanterns[i]))->getLanternSize())));
		lanternTable->setItem(i, 6, new QStandardItem(QString::fromStdString(lanterns[i]->getDateOfPurchase())));
	}
	LanternTableView->setModel(lanternTable);
	LanternTableView->horizontalHeader()->setStretchLastSection(true);
	LanternTableView->resizeColumnsToContents();
	LanternTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	LanternTableView->verticalHeader()->hide();
	LanternTableView->setSelectionMode(QAbstractItemView::SingleSelection);
	LanternTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

