#include "QtLoanRecordView.h"
#include "LoanControler.h"
QtLoanRecordView::QtLoanRecordView(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

QtLoanRecordView::~QtLoanRecordView()
{
}

void QtLoanRecordView::initialize(LoanControl* arg,bool admin) {

}

void QtLoanRecordView::updateTable(bool admin) {

}
