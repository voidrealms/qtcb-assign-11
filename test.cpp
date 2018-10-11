#include "test.h"

test::test(QObject *parent) : QObject(parent)
{

}

void test::kill()
{
    emit close();
}
