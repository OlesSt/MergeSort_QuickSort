#include <QCoreApplication>

#include "MergeSort.h"
#include "QuickSort.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "\nMerge Sort : " << std::endl;
    MergeSort::runMergeSort();

    std::cout << "\nQuick Sort : " << std::endl;
    QuickSort::runQuichSort();

    return a.exec();
}
