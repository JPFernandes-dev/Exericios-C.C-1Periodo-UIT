/**/

#include <stdio.h>
#include<stdlib.h>

int main () {
    int i;
    float media = 0, volume[12];

    for(i=0;i<12;i++){
        printf("Digite o volume das %dh: ", i+1);
        scanf("%f", &volume[i]);

        media += volume[i];
    }

    media /= 12;
    printf("\nMedia do dia: %.2f\n", media);

    for(i=0;i<12;i++){
        if(volume[i]>media){
            printf("Volume %.2f foi superior a media do dia\n", volume[i]);
        }
    }

    printf("\n\n");
    system("pause");
    return 0;
}