//
//  main.c
//  Turkey
//
//  Created by Uchendu Nwachuku on 10/15/12.
//  Copyright (c) 2012 Uchendu Nwachuku. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // declare the variables called 'cookingTime', 'weight' of type float
    float cookingTime, weight;

    // put a number in the 'weight' variable
    weight = 14.2;
    
    // log it to the user
    printf("Turkey Weight: %f.\n", weight);
    
    // calculate the cooking time abd store it in the variable.
    // in this case, '*' means 'multiplied by'.
    cookingTime = 15.0 + (weight * 15.0);
    
    // log that to the user
    printf("Cooking Time: %f.\n", cookingTime);
    
    
    return 0;
}

