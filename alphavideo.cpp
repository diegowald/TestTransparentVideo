#include "alphavideo.h"
#include <QUrl>
#include <QDebug>

AlphaVideo::AlphaVideo(QWidget *parent): QLabel(parent)
{
    setStyleSheet("QLabel { background-color : transparent; }");
    videoDrawer = new alphaVideoDrawer(this);
    videoPlayer = new QMediaPlayer(this);
    playlist = new QMediaPlaylist();
    videoPlayer->setPlaylist(playlist);
    videoPlayer->setVideoOutput(videoDrawer);
}


void AlphaVideo::setVideo(const QString &filename)
{
    playlist->addMedia(QUrl::fromLocalFile(filename));//"/home/diego/Downloads/Transparent video.avi") );
}


void AlphaVideo::play()
{
    videoPlayer->play();
}

void AlphaVideo::stop()
{
    videoPlayer->stop();
}
