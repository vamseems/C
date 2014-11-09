#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    char temp[100000]={0};
        char last[100000][2]={0};

    while (t>0)
    {
        char c;
        int i=1;
        int k,p;
                i=1;
        char index[26][26];
        int x,y;
        for(x=0;x<26;x++)
        {
            for(y=0;y<26;y++)
            {
                index[x][y]='!';
            }
        }
        int out='A';
        c=getchar();
        temp[0]=c;
        while (c!='#')
        {
            c=getchar();
            temp[i]=c;
            i++;
        }
        getchar();
  //      puts(temp);
        k=0;
        int j;
        for(j=0;j<i;j++)
        {
            //printf("%c",temp[j]);
            if (temp[j]=='\n')
            {
              //  printf("$");
                    last[k][0]=temp[j-2];
                    last[k][1]=temp[j-1];
                    k++;
            }
            if (temp[j]=='#')
            {
                //printf("*");
                last[k][1]=temp[j-1];
                last[k][0]=temp[j-2];
                k++;
                break;
            }
        }
        out=65;
        //printf("%d\n",k);
        for(p=0;p<k;p++)
        {
            int la=last[p][0]-'a';
            int lb=last[p][1]-'a';
          //  printf("%d %d\n",la,lb);
            if (index[la][lb]=='!')
            {
                index[la][lb]=out;
                out=out+1;
            }
            printf("%c",index[la][lb]);

        }
        printf("\n");
        t--;
    }
    return 0;
}
