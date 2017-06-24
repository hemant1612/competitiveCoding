/*
	Given a range of integers R = {l, l + 1, ..., r - 1, r}
	and a monotonically increasing predicate P, find the
	smallest  for which P(x) holds true. I then use the
	following code:
	FFFTTT
*/
int bSearch1(int low,int high,int a[])
{
	while(low<high)
	{
		int mid=(low+high+1)/2;
		if(/*condition true*/)
			high=mid;
		else low=mid+1;
	}
	//now low=high=x(see above for x)
	return low;
}
/*
	Note this does not work if P(r)=0. The algorithm will
	return x=r. To avoid this we artificially insert P(r+1)
	and set P(r+1)=1.
	Better precheck for this situation!
*/


/*
	Given a range of integers R = {l, l + 1, ..., r - 1, r}
	and a monotonically decreasing predicate P, find the 
	largest  for which P(x) holds true.
	If we set Q(x) = !P(x),then Q is increasing and we can
	use (1) to find x + 1. We can also just use the
	following slightly modified variant:
	TTTTFFF
*/
int bSearch2(int low,int high,int a[])
{
	while(low<high)
	{
		int mid=(low+high+1)/2;
		if(/*condition is true*/)
			low=mid;
		else high=mid-1;
	}
	//now low=high=x(see above for x)
	return low;
}