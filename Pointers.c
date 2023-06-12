#include <stdio.h>
#include <stdlib.h>

int sum,sub;
void update(int *a,int *b) {
    // Complete this function  
    sum=(*a)+(*b);
    sub=abs((*a)-(*b)); 
    *a=sum;
    *b=sub;
    return (*a),(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
