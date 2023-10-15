int main()
{
    int numbers[5];
    int *p;
    int n;
    p = numbers;
    *p = 10; /*p[0] = 10*/
    p++;
    *p = 20; /*p[1] = 20*/
    p = &numbers[2]; 
    *p = 30; /*p[2] = 10*/
    p = numbers + 3;
    *p = 40; /*p[3] = 40*/
    p = numbers;
    *(p + 4) = 50; /*p[4] = 50*/
    for (n = 0; n < 5; n++)
        printf("%d\n", numbers[n]);
}