import java.io.*;
import java.util.*;
class factorial
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			int n=Integer.parseInt(br.readLine());
			int ans=0;
			while(n>=5)
			{
				ans=ans+n/5;
				n=n/5;
			}
			System.out.println(ans);
		}
	}
}