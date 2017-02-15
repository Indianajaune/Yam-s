#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "yams.h"



int rollDice(dice d)
{
 return (rand() % 6) + 1;

}

int calculeAs(dice d){
	int i,j;
	j=0;
	for(i=0;i<5;i++)
	{
		if(d[i]==1) j++;

	}

return(j);
	}




int calculeDeux(dice d)
{
	int i,j;
	j=0;
	for(i=0;i<5;i++)
	{
		if(d[i]==2) j++;

	}

return(j);

}


int calculeTrois(dice d)
{
	int i,j;
	j=0;
	for(i=0;i<5;i++)
	{
		if(d[i]==3) j++;

	}

return(j);

}

int calculeQuatre(dice d)
{
	int i,j;
	j=0;
	for(i=0;i<5;i++)
	{
		if(d[i]==4) j++;

	}

return(j);

}

int calculeCinq(dice d)
{
	int i,j;
	j=0;
	for(i=0;i<5;i++)
	{
		if(d[i]==5) j++;

	}

return(j);

}

int calculeSix(dice d)
{
	int i,j;
	j=0;
	for(i=0;i<5;i++)
	{
		if(d[i]==6) j++;

	}

return(j);

}

int calculePrime(int total)
{
	if(total>=63)
	{
	total = total +35;
	}
	return(total);
}

int calculeBrelan(dice d)
{
	int i,j,k=0,l,t=0;

	for(i=1;i<6;i++)
	{
		for(j=0;j<5;j++)
		{
			if(d[j]==i)
			{
				k=k+1;
			}
			if((j==4)&&(k>=3))
			{
				for(l=0;l<5;l++)
				{
					t=t+d[l];
				}
				return(t);
			}
		}

	}

return(0);
}


int calculePtSuite(dice d)
{
	int i=0;
	for(i=0;i<1;i++)
	{
		if(((d[i]==1)&&(d[i+1]==2)&&(d[i+2]==3)&&(d[i+3]==4))||((d[i]==2)&&(d[i+1]==3)&&(d[i+2]==4)&&(d[i+3]==5))||((d[i]==3)&&(d[i+1]==4)&&(d[i+2]==5)&&(d[i+3]==6)))
		{
			return(40);
		}else return(0);

	}


}


int calculeGrdSuite(dice d)
{
	int i=0;
	for(i=0;i<1;i++)
	{
		if(((d[i]==1)&&(d[i+1]==2)&&(d[i+2]==3)&&(d[i+3]==4)&&(d[i]==5))||((d[i]==2)&&(d[i+1]==3)&&(d[i+2]==4)&&(d[i+3]==5)&&(d[i]==6)))
		{
			return(40);
		}else return(0);

	}


}


int calculeYahtzee(dice d)
{
	int i,k=0;
	for(i=0;i<4;i++)
	{
	if(d[i]==d[i+1])
	{
	k++;
	}

	}
	if(k==5) return(50);
	else return(0);

}


int calculeChance(dice d)
{
	int i,r=0;
	for(i=0;i<5;i++)
	{
		r=r+d[i];
	}
	return(r);
}
