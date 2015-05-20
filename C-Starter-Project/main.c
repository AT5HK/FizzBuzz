//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#include <stdio.h>

void NezzFizzBuzz (int Nezz, int Buzz, int Fizz);

int main(int argc, const char * argv[]) {
    // insert code here...
   
    NezzFizzBuzz(100, 3, 5);
    
    
    return 0;
}

void NezzFizzBuzz (int Nezz, int Buzz, int Fizz){
    
    for (int i = 1; i < Nezz; i++) {
        
        if (i % Fizz == 0 && i % Buzz == 0)
            printf("FizzBuzz\n");
        
        else if (i % Fizz == 0)
            printf("Fizz\n");
        
        else if (i % Buzz == 0)
            printf("Buzz\n");
        else
            printf("%d \n", i);
        
        
    }
    
}


