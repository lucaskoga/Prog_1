int main (){
    int num,n;
    int count = 0;

    printf("Digite o numero que deseja saber se eh primo: ");
    scanf("%d",&num);
    n = num;
    
    while(n>1){
        if(num%n == 0)
            count ++;
        n--;
    }
    if(count > 1){
        printf("%d nao eh primo.", num);
    } else printf("%d eh primo.", num);

    return 0;

}
