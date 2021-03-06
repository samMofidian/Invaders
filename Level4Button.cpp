/* written & directed by sAm mofidian */
#include "Level4Button.h"
#include "View.h"

Level4Button::Level4Button(QGraphicsScene * scene) : level4Scene{scene}
{
    // init click
    click = false;

    // image
    setPixmap(QPixmap(":/image/lvl4.png"));

    // add to scene
    scene->addItem(this);

    // pos
    setPos(600, 50);

    // music
    level4ButtonMusic = new QMediaPlayer();
    level4ButtonMusic->setMedia(QUrl("qrc:/music/click.mp3"));
}

void Level4Button::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    click = true;
    level4ButtonMusic->play();
    auto myView = new View(2, 4);
    myView->show();
}

Level4Button::~Level4Button()
{
    delete level4Scene;
    delete level4ButtonMusic;
}

/* written & directed by sAm mofidian */
