#pragma once

#include <QDialog>
#include "ui_QtLoanRecordView.h"

class QtLoanRecordView : public QDialog, public Ui::QtLoanRecordView
{
	Q_OBJECT

public:
	QtLoanRecordView(QWidget *parent = Q_NULLPTR);
	~QtLoanRecordView();
};
