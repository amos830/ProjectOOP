#include "DropDisplayFile.h"

DropDisplayFile::DropDisplayFile(QWidget * parent)
	: QLineEdit(parent)
{
	setAcceptDrops(true);
}

DropDisplayFile::~DropDisplayFile()
{
}

void DropDisplayFile::dragEnterEvent(QDragEnterEvent * event)
{
	if (event->mimeData()->hasUrls()&&event->mimeData()->urls().first().toString().right(4).contains(".txt"))
		event->acceptProposedAction();
}

void DropDisplayFile::dropEvent(QDropEvent * event)
{
		setText(event->mimeData()->urls().first().toLocalFile());
}
