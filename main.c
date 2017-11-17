//
//  main.c
//  do while loop
//
//  Created by Eun Jae Lee on 17/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i = 1;
    
    do {
        printf("%d \n",i);
        i++;
        
    } while (i < 9);// i <=10 or i<1 infinite loop
    
    return 0;
}
