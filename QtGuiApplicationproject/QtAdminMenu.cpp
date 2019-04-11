#include "QtAdminMenu.h"
#include "QtItemMenu.h"
#include "ImportequipmentMenu.h"
QtAdminMenu::QtAdminMenu(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
	x = 0;
	y = 0;
	Layout= new QPushButton**[2];
	Layout[0] = new QPushButton*[5];
	Layout[1]	= new QPushButton*[5];
	Layout[0][0] = ImportUser;
	Layout[0][1] = DisplayLoan;
	Layout[0][2] = ExportLoanRecords;
	Layout[0][3] = Exit;
	Layout[0][4] = Logout;
	Layout[1][0] = ImportCamp;
	Layout[1][1] = DisplayCamp;
	Layout[1][2] = ExportCampEquipment;
	Layout[1][3] = Exit;
	Layout[1][4] = Logout;
	Layout[1][4]->setFocus();
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++)
			Layout[i][j]->installEventFilter(this);
}

QtAdminMenu::~QtAdminMenu()
{
	delete[] Layout;
}

void QtAdminMenu::initialize(LoanControl * arg)
{
	loanControler = arg;
	keyboardmode = false;
}

void QtAdminMenu::keyPressEvent(QKeyEvent * event)
{
	auto test = focusWidget()->metaObject()->className();
	if ((event->key()==Qt::Key_Return||event->key() == Qt::Key_Enter)&&(!strcmp(focusWidget()->metaObject()->className(),"QPushButton")))
		emit qobject_cast<QPushButton *>(focusWidget())->clicked();
}

void QtAdminMenu::focusGoRight(bool reverse)
{
	if (reverse)
		if(x == 1) 
			x--;
		else return;
	else if (x == 0)
				x++;
}

void QtAdminMenu::focusGoDown(bool reverse)
{
	if (reverse)
		if (y - 1 >= 0) 
			y--;
		else return;
	else if (y + 1 <= 4)
		y++;
}

bool QtAdminMenu::eventFilter(QObject * object, QEvent * event)
{
	if (!strcmp(object->metaObject()->className(),"QPushButton"))
		if(event->type() == QEvent::KeyPress) 
			{
			QKeyEvent *Event = (QKeyEvent *)(event);
			if (Event->key() >= Qt::Key_Left&&Event->key() <= Qt::Key_Down) {
				if (!keyboardmode){
					keyboardmode = 1;
					if (Event->key() == Qt::Key_Up)
						Layout[1][0]->setFocus();
					return 0;
				}
				else if (Event->key() == Qt::Key_Up)
				{
					focusGoDown(true);
					Layout[x][y]->setFocus();
				}
				else if (Event->key() == Qt::Key_Down)
				{
					focusGoDown(false);
					Layout[x][y]->setFocus();
				}
				else if (Event->key() == Qt::Key_Left)
				{
					focusGoRight(true);
					Layout[x][y]->setFocus();
				}
				else if (Event->key() == Qt::Key_Right)
				{
					focusGoRight(false);
					Layout[x][y]->setFocus();
				}
				return 1;
			}
			else return 0;
			}
	return QWidget::eventFilter(object, event);
}

void QtAdminMenu::importCampEquipment()
{
	this->hide();
	ImportequipmentMenu menu(this);
	menu.initialize(this);
	menu.exec();
	this->show();
	Layout[x][y]->setFocus();
}

void QtAdminMenu::exportCampEquipment()
{
	Layout[x][y]->setFocus();
}

void QtAdminMenu::exportLoanRecords()
{
	Layout[x][y]->setFocus();
}

void QtAdminMenu::displayLoanRecords()
{
	Layout[x][y]->setFocus();
}

void QtAdminMenu::importUsers()
{
	this->hide();
	ImportUserMenu menu(this);
	menu.initialize(this);
	menu.exec();
	this->show();
	Layout[x][y]->setFocus();
}

void QtAdminMenu::displayEquipmentAdmin() {
	this->hide();
	QTItemMenu* EquipmentMenu = new QTItemMenu(this);
	EquipmentMenu->initialize(loanControler);
	EquipmentMenu->exec();
	this->show();
	Layout[x][y]->setFocus();
}