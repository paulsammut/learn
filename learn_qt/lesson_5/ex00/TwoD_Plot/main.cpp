#include <QApplication>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPointF>
#include <QVector>
#include <cmath>

#define PI 3.14159265

float getH(float angle, float cubeD);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVector <QPointF> points;

    QVector<float> angle;
    QVector<float> distance;

    float cubeD = 1000;

    // create our angle array
    for(int i = 0; i < 360; i++)
        angle.push_back((float)i);


    for(int i = 0; i < angle.length(); i++)
    {
        float tempD = getH(angle.at(i),cubeD);
        distance.push_back(tempD);
        points.append(QPointF(angle.at(i), distance.at(i)));
    }


    /*  -- Test Code ---
    // Fill in points with n number of points
    for(int i = 0; i< 100; i++)
       points.append(QPointF(i*5, i*5));
    */

    // Create a view, put a scene in it and add tiny circles
    // in the scene
    QGraphicsView * view = new QGraphicsView();
    QGraphicsScene * scene = new QGraphicsScene();
    view->setScene(scene);

    for(int i = 0; i< points.size(); i++)
        scene->addEllipse(points[i].x(), points[i].y(), 1, 1);

    // Show the view
    view->show();

    // or add the view to the layout inside another widget

    return a.exec();
}



float getH(float angle, float cubeD)
{
    float radAngle;
    if(angle <= 45)
    {
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else if(angle <= 90)
    {
        angle = 90 - angle;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else if(angle <= 135)
    {
        angle = angle-90;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else if(angle <= 180)
    {
        angle = 180 - angle;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else if(angle <= 225)
    {
        angle = angle-180;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else if(angle <= 270)
    {
        angle = 270 - angle;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else if(angle <= 315)
    {
        angle = angle-270;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
    else
    {
        angle = 360-angle;
        radAngle = angle*PI/180;
        return cubeD/cos(radAngle);
    }
}
