#ifndef ALPHAVIDEODRAWER_H
#define ALPHAVIDEODRAWER_H

#include <QObject>
#include <QAbstractVideoSurface>
#include <QLabel>

class alphaVideoDrawer : public QAbstractVideoSurface
{
    Q_OBJECT
public:
    explicit alphaVideoDrawer(QLabel *displayLbl);

private:
    QLabel *displayLbl;

protected:
    bool present(const QVideoFrame &frame);

    QList<QVideoFrame::PixelFormat> supportedPixelFormats(
        QAbstractVideoBuffer::HandleType handleType = QAbstractVideoBuffer::NoHandle) const
    {
        Q_UNUSED(handleType);
        return QList<QVideoFrame::PixelFormat>() << QVideoFrame::Format_ARGB32;
    }

};

#endif // ALPHAVIDEODRAWER_H
