#include "QTLoginWindow.h"
#include "Project.h"
#include "QtAdminMenu.h"
#include <QTimer>
#include <QThread>
#include <QKeyEvent>
QTLoginWindow::QTLoginWindow(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	reset();
}
QTLoginWindow::~QTLoginWindow()
{
	delete Parents;
}
void QTLoginWindow::initialize(LoanControl * arg)
{
	Parents = arg;
}
void QTLoginWindow::reset()
{
	ui.UserNameInput->setText("");
	ui.PasswordInput->setText("");
	ui.Error->setText("");
	ui.UserNameInput->setFocus();
	setTabOrder(ui.UserNameInput, ui.PasswordInput);
	setTabOrder(ui.PasswordInput, ui.ConfirmButton);
	setTabOrder(ui.ConfirmButton, ui.Exit);
}

User* QTLoginWindow::checkLoginInfo(string name,string password)
{
	for(int i=0;i<Parents->NoOfUsers;i++)
		{ 
		string Name = Parents->UserList[i]->getUserID();
		string Pass = Parents->UserList[i]->getPassword();
		if (Name==name && Pass==password) 
			{
				return Parents-> UserList[i];
			}
		}
		return nullptr;
}

void QTLoginWindow::keyPressEvent(QKeyEvent * event)
{
	QKeyEvent *tab = new QKeyEvent(QEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier);
	QKeyEvent *shifttab = new QKeyEvent(QEvent::KeyPress, Qt::Key_Tab, Qt::ShiftModifier);
	QKeyEvent *tabr = new QKeyEvent(QEvent::KeyRelease, Qt::Key_Tab, Qt::NoModifier);
	QKeyEvent *shifttabr = new QKeyEvent(QEvent::KeyRelease, Qt::Key_Tab, Qt::ShiftModifier);
	if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
		if (ui.UserNameInput->hasFocus())
			ui.PasswordInput->setFocus();
		else if (ui.PasswordInput->hasFocus())
			emit ui.ConfirmButton->clicked();
		else if (!strcmp(focusWidget()->metaObject()->className(),"QPushButton"))
			emit qobject_cast<QPushButton *>(focusWidget())->clicked();
	}
	else if (event->key() == Qt::Key_Up)
				{
					QCoreApplication::postEvent(this,shifttab);
					QCoreApplication::postEvent(this, shifttabr);
				}
	else if (event->key() == Qt::Key_Down)
				{
					QCoreApplication::postEvent(this, tab);
					QCoreApplication::postEvent(this, tabr);
				}
}

void QTLoginWindow::checkPassword() 
{
	std::string username = ui.UserNameInput->text().toStdString();
	std::string password=ui.PasswordInput->text().toStdString();
	User* test = checkLoginInfo(username, password);
	if (username == "admin"&&password == "admin")
	{
		QtAdminMenu* admin = new QtAdminMenu(this);
		admin->initialize(Parents);
		QEventLoop loop(this);
		QObject::connect(admin->Exit, SIGNAL(clicked()), this, SLOT(close()));
		QObject::connect(admin->Logout, SIGNAL(clicked()), &loop, SLOT(quit()));
		admin->show();
		this->hide();
		loop.exec();
		reset();
		this->show();
	}
	else if(test!=nullptr) 
		{
			Parents->setCurrentUser(test);
			Project* Menu = new Project(this);
			Menu->setLoanControler(Parents);
			QEventLoop loop(this);
			QObject::connect(Menu->ExitButton, SIGNAL(clicked()), this, SLOT(close()));
			QObject::connect(Menu->LogoutButton, SIGNAL(clicked()), &loop, SLOT(quit()));
			Menu->show();
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