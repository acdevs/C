#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("points of polygon, n? ");
    scanf("%d", &n);
    float points[n][2];

    for (int i = 0; i < n; i++){
        printf("p%i(x, y): ", i + 1);
        scanf("%f %f", &points[i][0], &points[i][1]);
    }
    float perimeter = 0;
    for (int i = 0; i < n; i++){
        int j = i == n - 1 ? 0 : i + 1;
        float side = sqrt(pow((points[i][0] - points[j][0]), 2) + pow((points[i][1] - points[j][1]), 2));
        perimeter += side;
    }

    printf("Perimeter: %.2f", perimeter);
}