// Online Carrays -3D
#include <stdio.h>

int main() {
   int i,j,k;
   int marks[2][2][4] ={ {{20,30,40,50},
                  {20,35,50,60}},
                  {{25,40,50,65},
                  {60,75,82,90}}};
   
   for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           for(k=0;k<4;k++){
       printf("marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);
           }
       }
       
}

    return 0;
}