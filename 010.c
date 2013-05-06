#include <stdio.h>
#include <math.h>
int main(){
  int i;
  unsigned long sum=2;
  //just checking odds
  for(i=3;i<2000000;i+=2){
    if(is_prime(i)){
      sum += i;
    }
  }
  printf("%lu\n",sum);
  return sum;
}
int is_prime(int num){
   int i;
   for (i=2;i<=(num/2);i++){  
     if (!(num%i)){
       return 0;
     }
   }
   return 1;
}