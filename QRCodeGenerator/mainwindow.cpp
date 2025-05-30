#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qrencode.h>

#include <QRect>
#include <QScreen>
#include <QApplication>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());  // Fix window size to current size

    centerWindow();

    ui->UserInput->setPlaceholderText("Enter any text to convert into QR code");

    setQRPlaceholder();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::centerWindow()
{
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->move(screenGeometry.center() - this->rect().center());
}

void MainWindow::setQRPlaceholder()const{
    ui->qrLabel->clear();
    ui->qrLabel->setText("Here will be your QR code");
    ui->qrLabel->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_Clear_clicked()
{
    ui->UserInput->clear();
    ui->qrLabel->clear();
    setQRPlaceholder();
}

QImage MainWindow::generateQRCode(const QString &text){

    QByteArray data = text.toUtf8();
    QRcode *qrCode=QRcode_encodeString(data.constData(), 0, QR_ECLEVEL_L, QR_MODE_8, 1);

    if(!qrCode){
        QMessageBox::warning(this, "QR Code Error", "Failed to generate QR code for the input text.");
         return QImage();
    }

    int qrSize=qrCode->width;

    QImage image(qrSize, qrSize, QImage::Format_RGB888);
    image.fill(Qt::white);

    unsigned char *qdata=qrCode->data;
    for (int y = 0; y < qrSize; ++y) {
        for (int x = 0; x < qrSize; ++x) {
            int index=y * qrSize +x;
            if(qdata[index] & 1){
                image.setPixelColor(x, y, Qt::black);
            }
        }
    }

    QRcode_free(qrCode);
    return image;
}

void MainWindow::on_GenarateQR_clicked()
{
    QString userInput=ui->UserInput->text();
    if (userInput.isEmpty()) {
        QMessageBox::information(this, "Input Required", "Please enter some text to generate QR code.");
        return;
    }

    QImage qrImage=generateQRCode(userInput);
    if (!qrImage.isNull()) {
        QImage scaled = qrImage.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation); // 300 is my square size in GUI
        ui->qrLabel->setPixmap(QPixmap::fromImage(scaled));
    }

}
