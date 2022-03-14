#include<stdio.h>

void sapXepTang(int a[], int n){
    int i, j;
    for(i = 0; i < n; i++)
        for(j = i+1; j< n; j++)
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}
void sapXepGiam(int a[], int n){
    int i, j;
    for(i = 0; i < n; i++)
        for(j = i+1; j< n; j++)
            if(a[i] < a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main(){
    int test, t = 1;
    scanf("%d", &test);
    while(test--){
        int a;
        scanf("%d", &a);
        int arr1[a], arr2[a], j, i;
        for(i = 0; i < a; i++) scanf("%d", &arr1[i]);
        for(i = 0; i < a; i++) scanf("%d", &arr2[i]);
        sapXepTang(arr1, a);
        sapXepGiam(arr2, a);
        printf("Test %d:\n", t++);
        int h=0, k = 0;
        for(i = 0; i < a + a; i++){
            if(i % 2 == 0) printf("%d ", arr1[h++]);
            else printf("%d ", arr2[k++]);
        }
        printf("\n");
    }
}