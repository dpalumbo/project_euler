#include <stdio.h>

int main(){
  FILE* f = fopen("011.txt", "r");
  int n = 0, i = 0, j=0,temp=0,max=0,A[20][20];
  while(fscanf(f, "%d", &n) > 0){
    A[i][j] = n;  
    i++;
    if(i==20){
      j++;
      i=0;
    }
    if(j==20){
      break;
    }
  }
  fclose(f);

  //Horizontal
  for(i=0;i<17;i++){
    for(j=0;j<20;j++){  
      temp=A[i][j]*A[i+1][j]*A[i+2][j]*A[i+3][j];
      if(temp>max){
        max=temp;
      }
    }
  } 
  //Vertical
  for(i=0;i<20;i++){
    for(j=0;j<17;j++){  
      temp=A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3];
      if(temp>max){
        max=temp;
      }
    }
  } 
  //Check forward slash diagonal /
  for(i=19;i>2;i--){
    for(j=0;j<17;j++){  
      temp=A[i][j]*A[i-1][j+1]*A[i-2][j+2]*A[i-3][j+3];
      if(temp>max){
        max=temp;
      }
    }
  } 

  //Check back slash diagonal \
  for(i=0;i<17;i++){
    for(j=0;j<17;j++){  
      temp=A[i][j]*A[i+1][j+1]*A[i+2][j+2]*A[i+3][j+3];
      if(temp>max){
        max=temp;
      }
    }
  } 

  printf("%d\n",max);
  return 0;
}