// Online Carrays -2D
#include <stdio.h>

int main() {
   int i,j;
   
   int marks[2][4] ={ {25,30,46,60},
                  {65,70,84,92}};
   
   for(i=0;i<2;i++){
       for(j=0;j<4;j++){
       printf("marks[%d][%d]=%d \n",i,j,marks[i][j]);
       }
       
}

    return 0;
}