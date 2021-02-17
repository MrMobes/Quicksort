//
// Created by intramural on 2/17/21.
//

#ifndef QUICKSORT_QS_H
#define QUICKSORT_QS_H
#include "QSInterface.h"

class QS: public QSInterface {
protected:
    int *myArray = nullptr;
    int insertPos = 0;
    int sizeOfArray = 0;
public:
    QS();
    ~QS();
    void sortAll() override;
    int medianOfThree(int left, int right) override;
    int partition(int left, int right, int pivotIndex) override;
    string getArray() const override;
    int getSize() const override;
    bool addToArray(int value) override;
    bool createArray(int capacity) override;
    void clear() override;
};

#endif //QUICKSORT_QS_H
