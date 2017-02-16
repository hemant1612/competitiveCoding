import java.io.*;
import java.util.Arrays;
import java.math.*;
class marcksCakewalk
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		int c[]=new int[n];
		for(int i=0;i<n;i++)
		{
			c[i]=Integer.parseInt(strs[i]);
		}
		BigInteger big=BigInteger.ZERO;
		//System.out.println(big);
		marcksCakewalk obj=new marcksCakewalk();
		c=obj.mergeSort(c);
		/*for(int i=0;i<c.length;i++)
			System.out.println(c[i]);*/
		int j=0;
		for(int i=c.length-1;i>=0;i--)
		{
			big=big.add(BigInteger.valueOf((long)(c[i]*Math.pow(2,j))));
			j++;
		}
		System.out.println(big);

	}
	public int[] mergeSort(int [] a)
    {
        if(a.length<=1)
        {
            return a;
        }
        int firstLength=a.length/2;
        int secondLength=a.length-firstLength;
        int first[]=new int[firstLength];
        int second[]=new int[secondLength];
        System.arraycopy(a,0,first,0,firstLength);
        System.arraycopy(a,firstLength,second,0,secondLength);
        first=mergeSort(first);
        second=mergeSort(second);
        merge(first,second,a);
        return a;
    } 

    public void merge(int [] first,int [] second,int [] a)
    {
        int iFirst=0;
        int iSecond=0;
        int j=0;
        while(iFirst<first.length&&iSecond<second.length)
        {
            if(first[iFirst]<second[iSecond])
            {
                a[j]=first[iFirst];
                iFirst++;
            }
            else
            {
                a[j]=second[iSecond];
                iSecond++;
            }
            j++;
        }
        System.arraycopy(first,iFirst,a,j,first.length-iFirst);
        System.arraycopy(second,iSecond,a,j,second.length-iSecond);
    }
}