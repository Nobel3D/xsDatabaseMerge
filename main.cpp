#include <QCoreApplication>
#include <QSql>
#include "../../xslib/src/xslib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    xsDatabase db();

    db.connect(argv[1]);

    QStringList buffer;

    for(int x = 0; true; i++)
    {
        db.useTable("bolleTestata");
        buffer = db.findValue("id",i); //row
        db.useTable("out");
        db.addValue(buffer);
        db.useTable("righeTestata");
        for(int y = 0; true; i++)
        {
            if(db.findValue("id",buffer.id) == OK) //parameters to compare
            {
                buffer = db.findValue("value",y);
                db.useTable("out");
                db.addValue(buffer);
            }
        }
    }

    return a.exec();
}
