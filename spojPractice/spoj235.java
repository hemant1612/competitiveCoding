import java.io.*;
import java.math.*;
class spoj235
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t--!=0)
		{
			String lines=br.readLine();
			String[] strs=lines.trim().split("\\s+");
			BigInteger m=BigInteger.valueOf(0),n=BigInteger.valueOf(0);
			for(int i=0;i<2;i++)
			{
				if(i==0)
				{
					m=new BigInteger(strs[i]);
				}
				else
				{
					n=new BigInteger(strs[i]);
				}
			}
			System.out.println(m.multiply(n));
		}
	}
}