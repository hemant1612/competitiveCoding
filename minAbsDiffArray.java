import java.util.*;
import java.io.*;
class hackerrank
{
	public static void main(String [] args)throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int m[]=new int[n];
		String lines=br.readLine();
		String[] strs=lines.trim().split("\\s+");
		for(int i=0;i<n;i++)
		{
			m[i]=Integer.parseInt(strs[i]);
		}
		hackerrank obj=new hackerrank();
		m=obj.mergeSort(m);
		int min=Math.abs(m[0]-m[1]);
		for(int i=0;i<n-1;i++)
		{
			if(Math.abs(m[i]-m[i+1])<min)
				min=Math.abs(m[i]-m[i+1]);
		}
		System.out.println(min);
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