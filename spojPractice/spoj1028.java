import java.io.*;
import java.util.*;
class spoj1028
{
	public static void main(String args[])throws IOException
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0)
		{
			t--;
			long n=sc.nextLong();
			int player=sc.nextInt();
			if(player==0) System.out.println("Airborne wins.");
			else System.out.println("Pagfloyd wins.");
		}
	}
}