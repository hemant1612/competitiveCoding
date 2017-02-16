import java.io.*;
class beautifulTriplets
{
	public static void main(String [] args)throws IOException
	{
		

		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		int a[]=new int[2];
		for(int i=0;i<2;i++)
		{
			a[i]=Integer.parseInt(strs[i]);
		}
		int n=a[0];
		int d=a[1];
		int m[]=new int[n];
		String lines1=br.readLine();
		String[] strs1=lines1.trim().split("\\s+");
		for(int i=0;i<n;i++)
		{
			m[i]=Integer.parseInt(strs1[i]);
		}

		int counter=0;
			for(int i=0;i<n;i++)
			{
				outer:
				{
					for(int j=i+1;j<n;j++)
					{
						if(m[j]-m[i]==d)
						{
							for(int k=j+1;k<n;k++)
							{
								if(m[k]-m[j]==d)
								{	counter++;
									break outer;
								}
							}
						}
					}
				}
			}
		System.out.println(counter);
	}
}
