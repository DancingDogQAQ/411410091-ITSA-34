//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792

#include <stdio.h>

int main(){
    float weight, sex, height;
    while(scanf("%f %f", &height, &sex) != EOF){
        if(sex == 1){
            weight = (height - 80) * 0.7;
        }
        else{
            weight = (height - 70) * 0.6;
        }
        printf("%.1f\n", weight);
    }
}
