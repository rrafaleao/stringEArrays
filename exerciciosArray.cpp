#include <iostream> 
using namespace std;

int main(){
    int num[5];
    printf("Digite cinco números: ");
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    printf("%d, %d, %d, %d, %d ", num[4], num[3], num[2], num[1], num[0]);

}