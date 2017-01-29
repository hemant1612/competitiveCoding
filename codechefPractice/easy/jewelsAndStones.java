import java.io.*;
import java.util.Arrays;
import java.util.Iterator;

class jewelsAndStones
{
	public static void main(String args[])throws IOException
	{
        	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        	int t=Integer.parseInt(br.readLine());
		for(int q=1;q<=t;q++)
		{
			String j=br.readLine();
			String s=br.readLine();
			int counter=0;
			for(int i=0;i<s.length();i++)
			{
				for(int k=0;k<j.length();k++)
				{
					if(s.charAt(i)==j.charAt(k))
						{
							counter++;
							break;
						}
				}
			}
			System.out.println(counter);
		}
	}
}
