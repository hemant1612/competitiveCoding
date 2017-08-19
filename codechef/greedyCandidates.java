import java.util.*;
import java.io.*;
class greedyCandidates
{
	public static void main(String args[])throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0)
		{
			t--;
			int n=sc.nextInt();
			int m=sc.nextInt();
			long minSalary[]=new long[n];
			for(int i=0;i<n;i++)
			{
				minSalary[i]=sc.nextLong();
			}
			long offeredSalary[]=new long[m];
			int maxJobOffers[]=new int[m];
			int check[]=new int[m];
			for(int i=0;i<m;i++)
			{
				offeredSalary[i]=sc.nextLong();
				maxJobOffers[i]=sc.nextInt();
				check[i]=maxJobOffers[i];
			}
			int qual[][]=new int[n][m];
			for(int i=0;i<n;i++)
			{
				String s=sc.next();
				for(int j=0;j<m;j++)
				{
					qual[i][j]=(int)Character.getNumericValue(s.charAt(j));
				}
			}
			long total=0,offers=0;
			for(int i=0;i<n;i++)
			{
				long salary=0;
				int job=-1;
				for(int j=0;j<m;j++)
				{
					if(qual[i][j]==1)
					{
						if(offeredSalary[j]>=minSalary[i]&&maxJobOffers[j]>0)
						{
							if(offeredSalary[j]>=salary)
							{
								job=j;
								salary=offeredSalary[j];
							}
						}
					}
				}
				if(job!=-1)
				{
					maxJobOffers[job]--;
					total+=salary;
					offers++;
				}
			}
			long leftovers=0;
			for(int i=0;i<m;i++)
			{
				if(check[i]==maxJobOffers[i]) leftovers++;
			}
			System.out.println(offers+" "+total+" "+leftovers);
		}
	}
}
