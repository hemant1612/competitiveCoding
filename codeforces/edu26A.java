import java.io.*;
public class edu26A
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		String s=br.readLine();
		//System.out.println(s);
		int counter=0,ans=0;
		for(int i=0;i<s.length();i++)
		{
			char c=s.charAt(i);
			//System.out.println(c);
			if(c==' ')
			{
				if(counter>ans) ans=counter;
				counter=0;
			}
			else
			{
				if((int)c>=65&&(int)c<=90)
					counter++;
			}
		}
		if(counter>ans) ans=counter;
			counter=0;
		System.out.println(ans);
	}
}