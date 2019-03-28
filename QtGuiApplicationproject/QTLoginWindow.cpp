#include "QTLoginWindow.h"
#include "QtAdminMenu.h"
#include <QTimer>
#include <QThread>
QTLoginWindow::QTLoginWindow(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}
QTLoginWindow::~QTLoginWindow()
{
	delete Parent;
}
void QTLoginWindow::initialize(LoanControl * arg)
{
	Parent = arg;
}
void QTLoginWindow::reset()
{
	ui.UserNameInput->setText("");
	ui.PasswordInput->setText("");
	ui.Error->setText("");
}

void QTLoginWindow::checkPassword() 
{
	std::string username = ui.UserNameInput->text().toStdString();
	std::string password=ui.PasswordInput->text().toStdString();
	if (username == "admin"&&password == "admin")
	{
		QtAdminMenu* admin = new QtAdminMenu(this);
		admin->initialize(Parent);
		QEventLoop loop(this);
		QObject::connect(admin->Exit, SIGNAL(clicked()), this, SLOT(close()));
		QObject::connect(admin->Logout, SIGNAL(clicked()), &loop, SLOT(quit()));
		admin->show();
		this->hide();
		loop.exec();
		reset();
		this->show();
	}
	else
		ui.Error->setText("Login info incorrect please type again");
}

ThankYouDialog::~ThankYouDialog()
{
}
ThankYouDialog::ThankYouDialog(QWidget *parent = Q_NULLPTR) {
	setupUi(this);
		QFont t_hanks("Comic Sans",15);
		ThankMessage->setFont(t_hanks);
		QObject::connect(Exit, SIGNAL(clicked()), this, SLOT(close()));
}
void ThankYouDialog::activateTimer() {
	QTimer::singleShot(5000, this, SLOT(close()));
	QDialog::exec();
}