#pragma once
#include <QLineEdit>
#include <QMimeData>
#include <QDragMoveEvent>
#include <QDropEvent>
class DropDisplayFile : public QLineEdit
{
public:
	void dragEnterEvent(QDragEnterEvent* event) override;
	void dropEvent(QDropEvent* event) override;
	DropDisplayFile(QWidget *parent = Q_NULLPTR);
	~DropDisplayFile();
};