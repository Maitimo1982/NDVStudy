//
//  NDVComputativeNumbersTest.c
//  NDVStudy
//
//  Created by test on 23.10.15.
//  Copyright © 2015 NDVcomp. All rights reserved.
//

#include "NDVComputativeNumbersTest.h"
#include "NDVComputativeNumbersObject.h"

void NDVORandomNumbersTest() {
    int i = 0;
    int inputNumber = 0;
    for (i =1; i < 101; i++ ) {
        inputNumber = rand();
        printf("No [%d] random number %d\n", i, inputNumber);
        printf("%d \n\n ", NDVComputativeNumber(inputNumber));
    }
    
    return;
}