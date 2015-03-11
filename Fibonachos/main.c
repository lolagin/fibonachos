//
//  main.c
//  Fibonachos
//
//  Created by Jeffrey C Rosenthal on 3/11/15.
//  Copyright (c) 2015 Jeffreycorp. All rights reserved.
//

#include <stdio.h>




int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber);
int recursiveReferenceFibonacci(int remainingSteps, int *previousNumber, int *previousPreviousNumber);

int main(int argc, const char * argv[]) {
    int prev = 1;
    int prevPrev = 0;
    
    int solution;
   
    solution = recursiveReferenceFibonacci(7, &prev, &prevPrev);
//    solution = recursiveValueFibonacci(7, 1, 0);

    printf("the number is: %d\n",solution);
    return 0;
}


int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber){

    if (remainingSteps == 2) {
       
        return (previousPreviousNumber+previousNumber);
    }
    else if (remainingSteps == 1){ return 1;}
    else if (remainingSteps <1){return 0;}
    else {
        
    return recursiveValueFibonacci(remainingSteps-1, (previousNumber + previousPreviousNumber), previousNumber);
        }
    }


int recursiveReferenceFibonacci(int remainingSteps, int *previousNumber, int *previousPreviousNumber) {
    if (remainingSteps == 2) {
                *previousNumber += *previousPreviousNumber;
        return (*previousNumber);
    }
    else if (remainingSteps == 1){ return 1;}
    else if (remainingSteps <1){return 0;}
    else {
        int Spank = *previousPreviousNumber + *previousNumber;
        int Monkey = *previousNumber;
        return recursiveReferenceFibonacci(remainingSteps - 1, &Spank, &Monkey);
}

}






