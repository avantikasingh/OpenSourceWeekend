

double avg_digits(int n)
{
	int sum=0,count=0;
	
	while(n>0)
	{
		sum=sum+(n%10);
		count++;
		n/10;
	}
	return(sum/count);
}