import java.io.*;
import java.math.*;
class spoj6236
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t--!=0)
		{
			int n=Integer.parseInt(br.readLine());
			BigDecimal ans=new BigDecimal(1.0);
			ans.setScale(10000);
			ans=BigDecimal.valueOf(1.0/Math.pow(2,n-1));
			if(n==1)
				System.out.println("1");
			else System.out.println(ans);
		}
	}
}