int main()
{
    int a = 5;
    char* b = &a;
    double c[10];
    if(a != 4){
        *b = 4;
    }
    else c[0] = 10;
    for(int i = 0; i < 15; i++){
        a--;
    }
    while(a < 0){
        a++;
    }
    return 10;
}