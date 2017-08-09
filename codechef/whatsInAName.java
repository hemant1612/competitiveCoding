import java.util.*;
import java.io.*;
import java.math.*;
class whatsInAName
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t!=0)
		{
			t--;
			String s=br.readLine();
			int counter=0;
			for(int i=0;i<s.length();i++)
			{
				if(s.charAt(i)==' ') counter++;
			}
			s=s.toLowerCase();
			if(counter==0)
			{				
				System.out.println(Character.toUpperCase(s.charAt(0))+s.substring(1,s.length()));
			}
			else if(counter==1)
			{
				int pos=0;
				for(int i=0;i<s.length();i++)
				{
					if(s.charAt(i)==' ') pos=i;
				}
				System.out.println(Character.toUpperCase(s.charAt(0))+". "+Character.toUpperCase(s.charAt(pos+1))+s.substring(pos+2,s.length()));
			}
			else
			{
				int pos1=0,pos2=0;
				for(int i=0;i<s.length();i++)
				{
					if(s.charAt(i)==' ')
					{
						if(pos1==0)
							pos1=i;
						else pos2=i;
					}
				}
				System.out.println(Character.toUpperCase(s.charAt(0))+". "+Character.toUpperCase(s.charAt(pos1+1))+". "+Character.toUpperCase(s.charAt(pos2+1))+s.substring(pos2+2,s.length()));
			}
		}
	}
}