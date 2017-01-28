import java.io.*;
class lcmFirstNnumbers
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int i=1;i<=t;i++)
		{
			int ans=1;
			int n=Integer.parseInt(br.readLine());
			int k=2;
			while(k<=n)
			{
				int p=1,part=1;
				while(Math.pow(k,p)<=n)
				{
					part=(int)Math.pow(k,p);
					p++;
				}
				ans*=part;
				if(k==2)
				k=3;
				else
				{
					int counter=1;
					while(counter!=0)
					{
						k=k+2;
						counter=0;
						for(int j=2;j<k;j++)
						{
							if(k%j==0)
							counter++;
						}
					}
				}
			}
			System.out.println(ans);
		}
	}
}
