#include <QCoreApplication>

#include "MergeSort.h"
#include "QuickSort.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MergeSort::runMergeSort();
    QuickSort::runQuichSort();

    return a.exec();
}
