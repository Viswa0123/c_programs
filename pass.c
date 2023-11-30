#include<stdio.h>
int main(){
    char ch[10];
    int n = 0;
    printf("Enter the code:");
    for(int i = 0; i < sizeof(ch); i++){
        char c;
        scanf("%c",&c);
        if(c == '\n')
            break;
        ch[i] = c;
        n++;
    }
    for(int i = 0; i < n; i++){
        if(ch[i] <= 'u' && ch[i] >= 'a' || ch[i] <= 'U' && ch[i] >= 'A'){
            ch[i] = ch[i] + 5;
        }   
        else{
            ch[i] = ch[i] - 21;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%c",ch[i]);
    }
    
    return 0;
}