#include<stdio.h> 
int main(int argc, char const *argv[])

{
    int a[]={1,2,3};
     printf("size of argv = %d",sizeof(a)); 
    //a.exe 1 2 
    printf("size of argv = %d",sizeof(*argv)); 
    printf("argc = %d",argc); 
    printf("\n%u ",argv[0]); //92
    printf("%u ",argv[1]);
    printf("%u ",argv[2]); 
    printf("%u ",argv[3]); 


    printf("\n%u ",*(argv + 0) + 0 ); //92 
    printf("%u ",*(argv + 0) + 1 ); //93
    printf("%u ",*(argv + 0) + 2 ); //94  
    printf("%u ",*(argv + 0) + 3 ); //94  
    printf("%u ",*(argv + 0) + 4 ); //94  
    printf("%u ",*(argv + 0) + 5 ); //94  
    printf("%u ",*(argv + 1) + 0 ); //94  
    printf("%u ",*(argv + 1) + 1 ); //94  
    printf("%u ",*(argv + 1) + 2 ); //94  

//     //pointer notation 
   printf("\n%c ",*(*(argv + 0) + 0 ) ); //a
   printf("%c ",*(*(argv + 0) + 1 ) ); //.
   printf("%c ",*(*(argv + 0) + 2 ) ); //e 
   printf("%c ",*(*(argv + 0) + 3 ) ); //x 
   printf("%c ",*(*(argv + 0) + 4 ) ); //e 
   printf("%c ",*(*(argv + 0) + 5 ) ); //space 
   printf("%c ",*(*(argv + 1) + 0 ) ); //o 
   printf("%c ",*(*(argv + 1) + 1 ) ); //n 
   printf("%c ",*(*(argv + 1) + 2 ) ); //e 
  

//     //array notation 
//     printf("\n%c ",argv[0][0] ); //a
//     printf("%c ",argv[0][1] ); //.
//     printf("%c ",argv[0][2] ); //e
    return 0;
}
