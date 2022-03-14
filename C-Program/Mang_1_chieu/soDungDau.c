// #include<stdio.h>

// int main(){
//     int test;
//     scanf("%d", &test);
//     while(test--){
//         int n;
//         scanf("%d", &n);
//         int a[n], i;
//         for(i = 0; i< n; i++) scanf("%d", &a[i]);
//         int j;
//         for(i = 0; i < n; i++){
//             int tmp = 0;
//             for(j = i + 1; j < n; j++){
//                 if(a[i] <= a[j]){
//                     tmp = 1;
//                     break;
//                 }
//             }
//             if(tmp == 0) printf("%d ", a[i]);
//         }
//         printf("\n");
//     }
// }
#include<stdio.h> 

int main(){ 
    int test; 
    scanf("%d", &test); 
    while(test--){ 
        int n; 
        scanf("%d",&n);
        int a[n], b[n];
        int k=0, i;
        for(i = 0;i < n;i++){ 
            scanf("%d", &a[i]); 
        } 
        int c=a[n-1]; 
        for(i = n - 1;i >= 1;i--){ 
            if(a[i] < a[i-1]){ 
                b[k] = a[i-1]; 
                k++; 
            }else{ 
                int tmp = a[i-1]; 
                a[i-1] = a[i]; 
                a[i] = tmp; 
            } 
        } 
        for(i = k-1;i >=0 ;i--){ 
            printf("%d ",b[i]); 
        } 
        printf("%d\n",c); 
    } 
    return 0; 
}