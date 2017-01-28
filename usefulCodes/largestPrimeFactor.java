import java.io.*;
class largestPrimeFactor
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter a number");
		int n=Integer.parseInt(br.readLine());
		int k=2,m=0;
		while(n>1)
			{
				if(n%k==0)
				{
					m=k;
					n=n/k;
				}
				if(k==2)
				k=3;
				else
				k=k+2;
			}
		System.out.println(m);
	}
}
