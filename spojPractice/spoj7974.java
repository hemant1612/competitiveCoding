import java.io.*;
import java.util.Arrays;
import java.math.*;
class spoj7974
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int f=1;
        while(f==1)
        {
        	String lines=br.readLine();
			String[] strs=lines.trim().split("\\s+");
			int m[]=new int[3];
			for(int i=0;i<3;i++)
			{
				m[i]=Integer.parseInt(strs[i]);
			}
			int a=m[0];
			int b=m[1];
			int c=m[2];
			if(lines.equals("0 0 0")==false)
			{
				if(c-b==b-a)
				{
					int next=c+(c-b);
					System.out.println("AP "+next);
				}
				else
				{
					int next=c*c/b;
					System.out.println("GP "+next);
				}
			}
			else
				f=0;
        }
    }
}