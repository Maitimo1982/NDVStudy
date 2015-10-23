//
//  NDVComputativeNumbersObject.c
//  NDVStudy
//
//  Created by test on 22.10.15.
//  Copyright © 2015 NDVcomp. All rights reserved.
//

#include "NDVComputativeNumbersObject.h"

#pragma mark -
#pragma mark Public implementations

NDVOutputType NDVComputativeNumber(int inputNumber) {
    NDVOutputType outputVariant = kNDVUnknownType;
    int remainder = 0;
    
    if (!(remainder = inputNumber % 3)) {
        outputVariant = kNDVMamaType;
        printf("mama");
    }
    
    if (!(remainder = inputNumber % 5 )) {
        printf("papa");
        
        if (outputVariant == kNDVMamaType) {
            outputVariant = kNDVMamapapaType;
        } else {
            outputVariant = kNDVPapaType;
        }
    }
    
    printf("\n");
    
    return outputVariant;
}

#pragma mark -
#pragma mark Private implementations