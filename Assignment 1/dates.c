#include<stdio.h>
#include<math.h>
int main()
{
	int n,d1,d2,d,m1,m2,m,y1,y2,y;
	while (n>0)
	{
		if (y2>y1)
		{
			if (m1>m2)
			{
			}
			else if (m1<m2)
			{}
			else if(m1==m2)
			{
				d=abs(d1-d2);
				y=y2-y1;
				m=0;
			}

		}
		else if(y1>y2)
		{
			if (m1>m2)
			{}
			else if (m2>m1)
			{}
			else if (m1==m2)
			{       
				d=abs (d1-d2);
				m=0;
				y=y1-y2;
			}

		}
		else if(y1==y2)
		{
			if (m1>m2)
			{}
			else if (m2>m1)
			{}
			else if (m1==m2)
			{
				d=abs (d1-d2);
				m=0;
				y=0;
			}

		}
		n--;
	}
	return 0;
}
