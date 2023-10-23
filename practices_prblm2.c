// #include <stdio.h>
// int main (){
//     int a, b;
//     int sum;
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("%d", sum);
//     return 0;
// }


// #include <stdio.h>
// int main (){
//     int i;
//     int n;
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("I Love Practice\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main (){
//     int i;
//     int n;
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++)
//     {
//        if(i % 5 ==0){
//            printf("Yes\n");
//        }
//        else{
//            printf("No\n");
//        }
//     }
//     return 0;
// // }

// #include <stdio.h>
// int main (){
//     int i;
//     int n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         if(i%5==0){
//             printf("YES\n");
//         }
//         else{
//             printf("NO\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int A;
    long long int B; 
    float C;
    char D;
    scanf("%d %lld %f %c", &A, &B, &C,&D);
    printf("%d %lld %.2f %c", A, B, C, D); 
    return 0;
}