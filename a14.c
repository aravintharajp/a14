int main()
{
int i,b,count=0;
scanf("%d",&b);
for(i=1;i<=b;i++)
{
    if(b%i==0)
    {
        count++;
    }
}
if(count==2)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
