#pragma once

#include <QDialog>
#include "ui_QTLoginWindow.h"
#include "ui_ThankYouDialog.h"
#include "LoanControler.h"
class QTLoginWindow : public QDialog
{
	Q_OBJECT

public:
	QTLoginWindow(QWidget *parent = Q_NULLPTR);
	~QTLoginWindow();
	LoanControl* Parents;
	void initialize(LoanControl* arg);
	void reset();
	User* checkLoginInfo(string name,string password);
	void keyPressEvent(QKeyEvent *event) override;
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
public slots:
	void activateTimer();
};
