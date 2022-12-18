#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int n, char* args[])
{
    FILE *fp;
    int upper;
    printf("\n Enter the highest range:");
    scanf("%d",&upper);
	int lower = 1;
	srand(time(0));
    int arr[upper];
    int i,j;
    fp = fopen(args[1], "w");
	for (i = 0; i < upper; i++) 
    {
		int num = (rand() %
		(upper - lower + 1)) + lower;
        arr[i]=num;
        for(j=0;j<i;j++)
        {
            if(num==arr[j])
                break;
            
        }
        if(i==j)
		{
            fprintf(fp, "%d\n", num);
        }
        else
            i--;
	}
    fclose(fp);
	return 0;
}
      
