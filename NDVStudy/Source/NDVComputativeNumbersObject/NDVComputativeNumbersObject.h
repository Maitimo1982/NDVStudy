//
//  NDVComputativeNumbersObject.h
//  NDVStudy
//
//  Created by test on 22.10.15.
//  Copyright © 2015 NDVcomp. All rights reserved.
//

#ifndef NDVComputativeNumbersObject_h
#define NDVComputativeNumbersObject_h

#include <stdio.h>

typedef enum {
    kNDVUnknownType,
    kNDVMamaType,
    kNDVPapaType,
    kNDVMamapapaType
} NDVOutputType;

extern
NDVOutputType NDVComputativeNumber(int inputNumber);



#endif /* NDVComputativeNumbersObject_h */
