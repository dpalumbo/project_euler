//longest sequence starting with a number under one million
#include <stdio.h>

int main(){
  unsigned long num=0,champ=0,seq_length=0,champ_seq_length=0,n=0;

  //lookup table for sequence lengths
  static unsigned long table[10000000];
  for(num=1;num<1000000;num++){
    printf("%lu\n",num);
    seq_length=0;
    n=num;
    while(1){
      if( n < 10000000 && table[n]!=0){
        seq_length += table[n];
        break;
      }
      else if (n==1){
        table[num]=seq_length;
        break;
      }
      //even
      if(n%2==0){
        n = n / 2;
      }
      else{
        n = 3 * n + 1; 
      }
      seq_length++;
    }

    if(seq_length>champ_seq_length){
      champ=num;
      champ_seq_length= seq_length;
    }
    seq_length = 0;
  }
  printf("%lu\n",champ);
  return 0;
}
