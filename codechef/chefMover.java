import java.io.*;
import java.util.*;
class chefMover
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0)
		{
			t--;
			int n=sc.nextInt();
			int d=sc.nextInt();
			long a[]=new long[n];
			long sum=0;
			for(int i=0;i<n;i++)
			{
				a[i]=sc.nextLong();
				sum+=a[i];
			}
			long ans=0;
			int f=1;
			if(sum%n==0)
			{
				long mean=sum/n;
				for(int i=0;i<n;i++)
				{
					if(i+d<n)
					{
						long diff=a[i]-mean;
						a[i]=mean;
						a[i+d]=diff+a[i+d];
						ans+=Math.abs(diff);
					}
					else
					{
						if(a[i]!=mean)
						{
							f=0;
							break;
						}
					}
				}
			}
			else
			{
				f=0;
			}
			for(int i=0;i<n-1;i++)
			{
				if(a[i]!=a[i+1])
				{
					f=0;
					break;
				}
			}
			if(f==1) System.out.println(ans);
			else System.out.println("-1");
		}
	}
}