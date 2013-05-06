#include <stdio.h>

//Brute force!
int main(){
  int i=0,divisor_count=0,num=0;

  while(count_divisors(num) <= 500){
    i++;
    num = (i * (i+1))/2;
  }

  printf("%d\n",num);
  return 0;
}

int count_divisors(num){
  if(num < 1){
    return 0;
  }

  int i=0,divisor_count = 0;
  for(i=1;i<=(num/2);i++){
    if(num%i == 0){
      divisor_count++;
    }
  }

  return divisor_count + 1;
}