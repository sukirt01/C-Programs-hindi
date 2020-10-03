#include <stdio.h>
int AddThreeNum(int x, int y, int z);

void main(){

    int s1,s2;
    s1=AddThreeNum(1,2,3);
    s2=AddThreeNum(1,5,3);
    printf("%d is sum1",s1);
    printf("%d is sum2",s2);
    printf("Value of sum = %d", AddThreeNum(2,5,3));
    getch();
}

int AddThreeNum(int x, int y, int z){
    int sum = x + y + z;
    return sum;
}
