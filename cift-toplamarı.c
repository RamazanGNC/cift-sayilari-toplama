// 1 den 10 a kadar olan çift sayýlarýn toplamý

#include <stdio.h>

int main (void)

{
	int i;
	int toplam;
	
	i=1;
	toplam=0;
	
	while (i <= 10)
	{
		if (i % 2 == 0)
		{
			toplam = toplam+i;
			i = i+1;
		}
		else 
		{
			i=i+1;
		}
		
		
	}
	
	printf ("toplami %d",toplam);
	
	
	
	
}



