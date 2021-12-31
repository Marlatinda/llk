       #include "record.h"
#include "ui_record.h"

Record::Record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Record)
{
    ui->setupUi(this);
    QPixmap pixmap = QPixmap(":/images/images/z.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);

    setWindowTitle("排行榜");
}

Record::~Record()
{
    delete ui;
}
