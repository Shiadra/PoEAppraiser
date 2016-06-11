#ifndef POEAPPRAISER_H
#define POEAPPRAISER_H

#include <QtWidgets/QMainWindow>
#include "ui_poeappraiser.h"

class PoEAppraiser : public QMainWindow
{
	Q_OBJECT

public:
	PoEAppraiser(QWidget *parent = 0);
	~PoEAppraiser();

private:
	Ui::PoEAppraiserClass ui;
};

#endif // POEAPPRAISER_H
