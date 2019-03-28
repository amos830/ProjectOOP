#pragma once

#include <QDialog>
#include "ui_QTLoginWindow.h"
#include "ui_ThankYouDialog.h"
class LoanControl;
class QTLoginWindow : public QDialog
{
	Q_OBJECT

public:
	QTLoginWindow(QWidget *parent = Q_NULLPTR);
	~QTLoginWindow();
	LoanControl* Parent;
	void initialize(LoanControl* arg);
	void reset();
private:
	Ui::QTLoginWindow ui;
public slots:
	void checkPassword();
};
class ThankYouDialog :public QDialog,public Ui::ThankYouDialog
{
	Q_OBJECT
public:
	~ThankYouDialog();
	ThankYouDialog(QWidget * parent);
};
