#include <QDebug>
#include "src_1.h"


testScore_t gradeTest(){
    return (12);
}

int main(int argc, char *argv[]) {



    //extern int bigDicks;
    qDebug() << "hello beautiful world!" << endl << endl;

    qDebug() << "Dicks is: " << Constants::dicks << endl;


    qDebug() << "Please enter the type of faggot that you are (legal input is from 0-3):";

    QTextStream in(stdin);

    int line;
    in >> line;

    Faggot fag = static_cast<Faggot>(line);

    qDebug() << endl << "You are a ";

    switch(fag){
        case Faggot::FAGGOT             : qDebug() << "FAGGOT";                             break;
        case Faggot::NIGGER_FAGGOT      : qDebug() << "NIGGER FAGGOT";                      break;
        case Faggot::JEW_FAGGOT         : qDebug() << "JEW FAGGOT";                         break;
        case Faggot::NIGGER_JEW_FAGGOT  : qDebug() << "NIGGER JEW FAGGOT";                  break;
        default                 : qDebug() << "ILLEGAL FAGGOT THAT CAN'T READ.";    break;
    }


     qDebug() << gradeTest();
    return 0;


}
