#include <stdio.h>

int main(){
    
    //step 1
    char c = 'A'; 
    int x = 10; 
    long y = 999; 
    
    //step 2
    printf("&c hex:\t\t%p\n", &c);
    printf("&c decimal:\t%d\n", &c); 

    printf("&x hex:\t\t%p\n", &x);
    printf("&x decimal:\t%d\n", &x);

    printf("&y hex:\t\t%p\n", &y);
    printf("&y decimal:\t%d\n", &y);
    //addresses change everytime you run the code

    //step 3
    char *cp = &c; 
    int *xp = &x; 
    long *yp = &y; 

    //step 4
    printf("*cp:\t%p\n", cp);
    printf("*xp:\t%p\n", xp);
    printf("*yp:\t%p\n", yp);

    //step 5
    (*cp)++, (*xp)++, (*yp)++;

    printf("new c:\t%c\n", c);
    printf("new x:\t%d\n", x);
    printf("new y:\t%ld\n", y);

    //step 6
    unsigned int ux = 32; 

    int *uxp = &ux; 
    char *uxcp = &ux; 

    //step 7
    printf("uxp:\t%p uxp points to:\t%d\n", uxp, *uxp); 
    printf("uxcp:\t%p uxcp points to:\t%d\n", uxcp, *uxcp);

    //step 8
    printf("ux hex:\t\t%x\n", ux); 
    printf("ux decimal:\t%u\n", ux);

    //step 9
    printf("byte 0: %hhu\n", *uxcp); 
    printf("byte 1: %hhu\n", *(uxcp+1)); 
    printf("byte 2: %hhu\n", *(uxcp+2)); 
    printf("byte 3: %hhu\n\n", *(uxcp+3)); 

    //step 10
    int i; 
    for(i = 0; i < 4; i++){
        *uxcp = *uxcp +1; 
        printf("byte %d hex:\t%hhx\n", i, *uxcp);
        printf("byte %d decimal:\t%hhu\n", i, *uxcp);
        uxcp = uxcp +1;
    }
    
    //step 11
    printf("\n"); 
    uxcp = uxcp -4; 
    int z; 
    for(z = 0; z < 4; z++){
        *uxcp = *uxcp + 16; 
        printf("byte %d hex:\t%hhx\n", z, *uxcp);
        printf("byte %d decimal:\t%hhu\n", z, *uxcp);
        uxcp = uxcp +1;
    }


    return 0;
}
