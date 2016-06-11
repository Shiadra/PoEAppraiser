#include "poeappraiser.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PoEAppraiser w;
	w.show();
	return a.exec();
}
