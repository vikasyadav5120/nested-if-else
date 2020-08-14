#include<stdio.h>

int main()
{
 float s1,s2, s3, s4 , s5 , per;
 printf("enter marks of 5  subjects\n");
 scanf("%f %f %f %f %f " ,&s1 , &s2 , &s3, &s4 ,&s5);
 per = (s1 +s2+s3+s4+s5) / 5.0;
 if(per > 80)
 {
    printf("grade A\n");

}
else
{
    if(per >= 70)
    {
        printf("grade B\n");
    }
    else
    {
        if(per >= 60)
        {
            printf("grade c\n");
        }
        else
        {
            if(per>= 45)
            {
                printf("grade D\n");
            }
            else
            {
                printf("fail");
            }
        }
    }
}


    return 0;
}

