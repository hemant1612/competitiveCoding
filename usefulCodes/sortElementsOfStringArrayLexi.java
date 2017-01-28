import java.util.Arrays;
import java.io.*;
class sortElementsOfStringArrayLexi
{
	public static void main(String []args)throws IOException
	{
		String [] arr={"abc","rst","pqr","qwerty","lmn"};
		Arrays.sort(arr,1,4);
		System.out.println(Arrays.toString(arr));
	}
}
