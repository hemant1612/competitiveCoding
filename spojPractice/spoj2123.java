import java.io.*;
class spoj2123
{
	//public int sum=0;
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int f=1;
		spoj2123 obj=new spoj2123();
		while(f==1)
		{
			int sum=0;
			int n=Integer.parseInt(br.readLine());
			if(n!=-1)
			{
				int m[]=new int[n];
				for(int i=0;i<n;i++)
				{
					m[i]=Integer.parseInt(br.readLine());
				}
				for(int i=0;i<n;i++)
					sum=sum+m[i];
				//System.out.println();
				//System.out.println(sum);
				if(sum%n!=0)
					System.out.println("-1");
				else
				{
					int counter=0;
					int mean=sum/n;
					for(int i=0;i<n;i++)
					{
						if(m[i]<mean)
							counter=counter+mean-m[i];
					}
					System.out.println(counter);
				}
			}
			else
				f=0;
		}
	}
}