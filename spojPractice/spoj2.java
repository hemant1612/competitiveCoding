import java.io.*;
class spoj2
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			int n=Integer.parseInt(br.readLine());
			int m=Integer.parseInt(br.readLine());

		}
	}
	public int[] generator(int sqn)
	{
		int m[]=new int[sqn];
		for(int i=0;i<n;i++)
		{
			m[i]=1;
		}
		for(int i=2;i<=Math.sqrt(n);i++)
		{
			int counter=0;
			if(m[i]==1)
			{
				for(int j=2;j<n;j=i*i+counter*i)
				{
					m[i]=0;
				}
			}
		}

	}
}