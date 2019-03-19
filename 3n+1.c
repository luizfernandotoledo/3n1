#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f=0, i, nF, h, y;

    while(scanf("%d %d", &n, &nF)!=EOF){
        y = 0;
        if(n<nF){
            for(i=n; i<=nF; i++){
                f = 1;
                h = i;
                while(h != 1){
                    if(h%2 == 0){
                        h = h/2;
                    }else{
                        h = (3*h)+1;
                    }
                    f++;
                }
                if(f > y){
                    y = f;
                }
            }
        }
        else{
            for(i=nF; i<=n; i++){
                f = 1;
                h = i;
            while(h != 1){
                if(h%2 == 0){
                    h = h/2;
                }else{
                    h = (3*h)+1;
                }
                f++;
            }
            if(f > y){
                y = f;
            }
        }
    }
    printf("%d %d %d\n", n, nF, y);
    }
    return 0;
}
