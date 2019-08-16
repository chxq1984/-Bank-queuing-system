#include "employee.h"
#include "ui_employee.h"
#include <QtNetwork>
#include <QString>
#include <QMovie>

employee::employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee)
{
    ui->setupUi(this);
    ui->the_next->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->exit->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s1.jpg");
    ui->label->setMovie(iconShow);
    iconShow->start();
    connect_wor_ser();
    connect(this->ui->exit,SIGNAL(clicked()),this,SLOT(close()));



    // ҪaudioOutputƵղֱƵͨŵĲɲֲ䵱MediaObjectƵ豸
      audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory,this); //
      mediaObject = new Phonon::MediaObject(this);        //
      metaInfomationResolver  = new Phonon::MediaObject(this);    // ָǰƵ
      Phonon::createPath(mediaObject,audioOutput);    // ղۺý֮佨




      createLayout();     // create layout and connection

}

employee::~employee()
{
    delete ui;
}

void employee::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

/////////////////////////////////////
void employee::on_the_next_clicked()
{
    send_asknew();
    playOrPause();
}
void employee::connect_wor_ser()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress("192.168.70.77"), 5555);
    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}
void employee::readPendingDatagrams()
{
   QByteArray datagram;
   datagram.resize(udpSocket->pendingDatagramSize());
   udpSocket->readDatagram(datagram.data(), datagram.size());
}
void employee::send_asknew()//assume to be the A desk
{
    int fl=0;
    QByteArray datagram;
    datagram="D";
    fl= udpSocket->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);
}



void employee::createLayout()
{

    //
    seekSlider = new Phonon::SeekSlider(this);    //
    seekSlider->setMediaObject(mediaObject);

     //
    volumeSlider = new Phonon::VolumeSlider(this);
    volumeSlider->setAudioOutput(audioOutput);   //  豸
    volumeSlider->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);  //  Χ

    //timeLcd = new QLCDNumber(this);
   // timeLcd->display("00:00");      // ʾʱ


    QHBoxLayout *toolsBtnLayout = new QHBoxLayout;
    //toolsBtnLayout->addStretch(20);




    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->addWidget(ui->openBtn);
    btnLayout->addWidget(ui->the_next);



    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(volumeSlider);
   // hlayout->addWidget(timeLcd);

    QHBoxLayout *seekSliderLayout = new QHBoxLayout;
    seekSliderLayout->addWidget(seekSlider);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(toolsBtnLayout);
    mainLayout->addLayout(btnLayout);
    mainLayout->addLayout(hlayout);
    mainLayout->addLayout(seekSliderLayout);

    setLayout(mainLayout);

}




// ʾ



//   LCDNumber  display



/* ************ ޱ  갴ºƶʵִڵƶ *********** */


/*  ******************************* widget move  ******************************/




/*  ************************** Animation functions  û¸д**********************/

//


// չ


/*  **************************** Animation functions  end **************************/


// ļť
void employee::addFiles()
{
   QStringList files = QFileDialog::getOpenFileNames(this,tr("Open music files"),
                                                     QDesktopServices::storageLocation(QDesktopServices::MusicLocation),
                                                     tr("Music (*.mp3 *.wma *.ape *.wav)"));
    ui->the_next->setChecked(false);

    if(files.isEmpty())     // Ϊ  򷵻
        return;
    int index = sources.size();          // ˽гԱ  洢ýԴϢ

    foreach(QString string,files){
        Phonon::MediaSource NewSources(string);        // ǰԴ
        sources.append(NewSources);          // ׷ӵsource
    }

    if(!sources.isEmpty()){             //  ԴΪ

        metaInfomationResolver->setCurrentSource(sources.at(index));   // ָǰԴָ
        mediaObject->setCurrentSource(metaInfomationResolver->currentSource()); // õǰԴ
        // ѡԴֱӲ
        mediaObject->play();
        //ui->the_next->setIcon(QIcon(":/images/push.png"));           // ŵʱΪͣͼ
        //ui->the_next->setIconSize(QSize(48,48));     // ICONĴС
    }


}

//    ͣť
void employee::playOrPause()
{
    switch(mediaObject->state()){

    case Phonon::PlayingState:
        //ui->the_next->setIcon(QIcon(":/images/play.png"));
        //ui->the_next->setIconSize(QSize(48,48));     // ICONĴС
        mediaObject->pause();
        ui->the_next->setChecked(false);
        break;
    case Phonon::PausedState:
       // playBtn->setIcon(QIcon(":/images/push.png"));   // ͣ
        mediaObject->play();
        break;
    case Phonon::StoppedState:
        mediaObject->play();
        break;
    case Phonon::LoadingState:
        ui->the_next->setChecked(false);
        break;
    }
}



// about to finish current track


// finished




void employee::on_openBtn_clicked()
{
    addFiles();
}



