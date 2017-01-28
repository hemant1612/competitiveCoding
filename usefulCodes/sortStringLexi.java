import java.io.*;
import java.util.*;
class sortStringLexi
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter a string");
		String s=br.readLine();
		char[] chars = s.toCharArray();
		Arrays.sort(chars);
		s = new String(chars);
		System.out.println(s);
	}
}
