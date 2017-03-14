import java.io.*;
import java.math.*;
class gcd2
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int b=Integer.parseInt(br.readLine());
		gcd2 obj=new gcd2();
		System.out.println(obj.gcd(a,b));
	}
	int gcd(int a, int b)
	{
		if(b==0)
			return a;
		else
			return gcd(b,a%b);
	}
}