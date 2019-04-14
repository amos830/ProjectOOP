#include "BorrowDialog.h"
#include "LoanControler.h"
#include "ErrorAlert.h"
#include <QDate>
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
		tentTable->setItem(i, 8, new QStandardItem(QDate::fromString(QString::fromStdString(tents[i]->getDateOfPurchase()), "ddMMyyyy").toString("dd.MM.yyyy")));
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
		stoveTable->setItem(i, 5, new QStandardItem(QDate::fromString(QString::fromStdString(stoves[i]->getDateOfPurchase()), "ddMMyyyy").toString("dd.MM.yyyy")));

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
		lanternTable->setItem(i, 6, new QStandardItem(QDate::fromString(QString::fromStdString(lanterns[i]->getDateOfPurchase()), "ddMMyyyy").toString("dd.MM.yyyy")));
	}
	LanternTableView->setModel(lanternTable);
	LanternTableView->horizontalHeader()->setStretchLastSection(true);
	LanternTableView->resizeColumnsToContents();
	LanternTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	LanternTableView->verticalHeader()->hide();
	LanternTableView->setSelectionMode(QAbstractItemView::SingleSelection);
	LanternTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	EquipmentResult Avalible = loanController->getEquipment("", false);
	for (int i = 0; i < Avalible.size; i++)
	{
		AvalibleLIst->addItem(QString::fromStdString(Avalible.List[i]->getItemID()));
	}
	AvalibleLIst->setSelectionMode(QAbstractItemView::MultiSelection);
	for(int i=0;i<loanController->records.size()&&!loanController->records.empty();i++)
		if(loanController->records.at(i).getStatus()=="out"&&loanController->records.at(i).getNameOfBorrower()==loanController->CurrentUser->getName())
			BorrowedList->addItem(QString::fromStdString(loanController->records.at(i).getId()));
	BorrowedList->setSelectionMode(QAbstractItemView::MultiSelection);
	QuotaCount->setText("You Can Borrow " + QString::number(loanController->CurrentUser->getQuota())+ " more items");
}
void BorrowDialog::borrowList() {
	for each (QListWidgetItem *code in AvalibleLIst->selectedItems())
	{
		BorrowedList->addItem(AvalibleLIst->takeItem(AvalibleLIst->row(code)));
		code->setForeground((code->foreground()==Qt::red)?Qt::black:Qt::red);
	}
}
void BorrowDialog::returnList() {
	for each (QListWidgetItem *code in BorrowedList->selectedItems())
	{
		AvalibleLIst->addItem(BorrowedList->takeItem(BorrowedList->row(code)));
		code->setForeground((code->foreground() == Qt::red) ? Qt::black : Qt::red);
	}
	
}

void BorrowDialog::reset()
{
	AvalibleLIst->clear();
	BorrowedList->clear();
	updateTable();
}

void BorrowDialog::confirm()
{
	for (int i = 0; i < AvalibleLIst->count(); i++)
		if (AvalibleLIst->item(i)->foreground() == Qt::red)
			loanController->ReturnItem(AvalibleLIst->item(i)->text().toStdString(),loanController->CurrentUser->getName());
	std::vector<std::string> list;
	for (int i = 0; i < BorrowedList->count(); i++)
		if (BorrowedList->item(i)->foreground() == Qt::red)
			list.push_back(BorrowedList->item(i)->text().toStdString());
	if (loanController->amountBorrowed() != loanController->CurrentUser->getQuota())
		{
			ErrorAlert test(this);
			test.initialize(false, "Please Return All Items Before Borrowing again", nullptr);
			test.exec();
		}
	else if (loanController->BorrowItems(list))
	{
		ErrorAlert test(this);
		test.initialize(false, "Number Of Item borrowed Exceed Quota,Please Select Again", nullptr);
		test.exec();
	}
	reset();
}
