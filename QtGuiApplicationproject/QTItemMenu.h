#pragma once

#include <QDialog>
#include "ui_QTItemMenu.h"
#include <QStandardItemModel>
#include "QtAdminMenu.h"

class QTItemMenu : public QDialog
{
	Q_OBJECT

public:
	QTItemMenu(QWidget *parent = Q_NULLPTR);
	~QTItemMenu();
	QStandardItemModel* tentTable;
	QStandardItemModel* stoveTable;
	QStandardItemModel* lanternTable;
	LoanControl* Parent;
	void initialize(LoanControl* arg);
	Equipment** tents;
	Equipment** stoves;
	Equipment** lanterns;
private:
	Ui::QTItemMenu ui;
public slots:
	void editConditionTent(QModelIndex info);
	void updateTable();
	void editConditionStove(QModelIndex info);
	void editConditionLantern(QModelIndex info);
};
#include "ui_ChangeConditionUI.h"
class ChangeConditionUI : public QDialog, public Ui::ChangeConditionUI
{
	Q_OBJECT

public:
	ChangeConditionUI(QWidget *parent = Q_NULLPTR);
	~ChangeConditionUI();
	Equipment* Target;
	void setData(Equipment* Item);
public slots:
	void modifyCondition();
};
