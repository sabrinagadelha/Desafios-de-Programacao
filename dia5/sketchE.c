#include <stdio.h>

int main(){
    int T, n;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d", &n);
        int R[n], B, totalR = 0, totalB = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &R[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%d", &B);
            if(B < R[i]){
                totalR += 1;
            }
            else if(B > R[i]){
                totalB += 1;
            }
        }
        if(totalB > totalR ){
            printf("BLUE\n");
        }
        else if(totalR > totalB){
            printf("RED\n");
        }
        else{
            printf("EQUAL\n");
        }
    }
}
