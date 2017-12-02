#include <stdio.h>
int main()
{
	int n,i,j;
	abc:
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
	{
		if(i==0) printf(".");
		else
			if(i==n) printf(".");
			else if(j==0||j==n) printf(".");
			else printf(" ");
		
	}

	printf("\n");
	}
	printf("ban muon nhap tiep hay khong\nMuon thi nhap vao so 1 \n Con khong thi bam 2 :");
	int c;
	scanf("%d",&c);
	if(c==1) goto abc;
}
