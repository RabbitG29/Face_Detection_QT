#include <QtWidgets/QWidget>
#include "ui_Result.h"

class Result : public QWidget
{
	Q_OBJECT

public:
	Result(QWidget *parent = Q_NULLPTR);

private:
	Ui::ResultClass ui;
};
