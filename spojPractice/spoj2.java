import java.io.*;
class spoj2
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		spoj2 obj=new spoj2();
		while(t!=0)
		{
			t--;
			int m=Integer.parseInt(br.readLine());
			int n=Integer.parseInt(br.readLine());
			int array[]=new int[n+1];
			for(int i=0;i<=n;i++)
				array[i]=1;
			int prime[];
			prime=obj.primeG((int)Math.floor(Math.sqrt(n)));
			int count=0;
			int q=m;
			for(int i=0;i<prime.length;i++)
			{
				int k=(int)(Math.floor(m/prime[i]));
				int k1=k*2;
				q++;
				for(int j=m;j<=n;j++)
				{
					array[j]=0;
				}
			}
			for(int i=m;i<=n;i++)
			{
				if(array[i]==1)
					System.out.println(i);
			}
		}
	}
	public int[] primeG(int sqn)
	{
		int m[]=new int[sqn];
		for(int i=0;i<sqn;i++)
			m[i]=1;
		int sqqn=(int)(Math.floor(Math.sqrt(sqn)));
		int counter=0;
		for(int i=2;i<=sqqn;i++)
		{
			int count=0;
			if(m[i]==1)
			{
				for(int j=i*i;j<sqn;j=i*i+count*i)
				{
					m[i]=0;
					count++;
					counter++;
				}
			}
		}
		for(int i=2;i<sqn;i++)
		{
			if(m[i]==1)
				System.out.println(i);
		}
		int prime[]=new int[counter];
		int count=0;
		for(int i=0;i<sqn;i++)
		{
			if(m[i]==1)
			{
				prime[count]=i;
				count++;
			}
		}
		return prime;
	}
}