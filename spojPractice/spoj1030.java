import java.io.*;
class spoj1030
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		long a1=192;
		long a2=442;
		long a3=692;
		long a4=942;
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			long k=Long.parseLong(br.readLine());
			long m=k%4;
			long n=k/4;
			if(m==0)
			{
				m=4;
				n--;
			}
			if(m==1)
			System.out.println((n*1000+a1));
			else if(m==2)
				System.out.println((n*1000+a2));
			else if(m==3)
				System.out.println((n*1000+a3));
			else
				System.out.println((n*1000+a4));
		}
	}
}