import java.io.*;
import java.util.Arrays;
import java.math.*;
class spoj3410
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int f=1;
        while(f==1)
        {
        	Double n=Double.parseDouble(br.readLine());
        	if(n!=0)
        	{
        		double answer=n*(2*n+1)*(n+1)/6;
        		System.out.println((int)answer);
        	}
        	else
        		f=0;
        }
    }
}