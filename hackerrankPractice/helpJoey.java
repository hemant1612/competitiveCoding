import java.io.*;
import java.math.*;
import java.util.*;
class helpJoey
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t!=0)
		{
			t--;
			int n=Integer.parseInt(br.readLine());
			String s=br.readLine();
			int x=0,max=0;
			for(int i=0;i<s.length();i++)
			{
				if(s.charAt(i)=='I') x++;
				else x--;
				if(x>max)
					max=x;
			}
			System.out.println(max);
		}
	}
}