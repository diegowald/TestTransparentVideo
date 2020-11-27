#ifndef ALPHAVIDEO_H
#define ALPHAVIDEO_H

#include <QObject>
#include <QLabel>
#include "alphavideodrawer.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

class AlphaVideo : public QLabel
{
    Q_OBJECT
public:
    AlphaVideo(QWidget *parent = nullptr);
    void setVideo(const QString &filename);
    void play();
    void stop();
private:
    alphaVideoDrawer *videoDrawer;
    QMediaPlayer *videoPlayer;
    QMediaPlaylist *playlist;

};

#endif // ALPHAVIDEO_H
