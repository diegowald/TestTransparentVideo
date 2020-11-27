#include "alphavideodrawer.h"

alphaVideoDrawer::alphaVideoDrawer(QLabel *displayLbl):displayLbl(displayLbl)
{

}


extern QImage qt_imageFromVideoFrame(const QVideoFrame &f);


bool alphaVideoDrawer::present(const QVideoFrame &frame)
{
    QImage image = qt_imageFromVideoFrame(frame);
    displayLbl->setPixmap(QPixmap::fromImage(image));
    return true;
}
