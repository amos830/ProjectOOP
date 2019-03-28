#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project.h"

class Project : public QMainWindow
{
	Q_OBJECT

public:
	Project(QWidget *parent = Q_NULLPTR);

private:
	Ui::ProjectClass ui;
};
