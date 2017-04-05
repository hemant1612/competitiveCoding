import java.io.*;
import java.math.*;
class bigIntegerSize
{
	public static int getDigitCount(BigInteger number) 
	{
	  double factor = Math.log(2) / Math.log(10);
	  int digitCount = (int) (factor * number.bitLength() + 1);
	  if (BigInteger.TEN.pow(digitCount - 1).compareTo(number) > 0) 
	  {
	    return digitCount - 1;
 	   }
  	  return digitCount;
	}
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BigInteger n=new BigInteger(br.readLine());
		bigIntegerSize obj=new bigIntegerSize();
		int ans=obj.getDigitCount(n);
		System.out.println(ans);
	}
}