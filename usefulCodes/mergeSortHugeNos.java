//there is something called pigeon hole sort. read about it
import java.io.*;
import java.util.Arrays;
import java.math.*;
class mergeSortHugeNos
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number of elements in the array:");
        int n=Integer.parseInt(br.readLine());
        BigInteger a[]=new BigInteger[n];
        System.out.println("Enter the elements on a single line seperated by space");
        //String  lines = br.readLine();    
       // String[] strs = lines.trim().split("\\s+");
        for (int i = 0; i < n; i++) {
            a[i] = new BigInteger((br.readLine()));
        }
        mergeSortHugeNos obj=new mergeSortHugeNos();
        a=obj.mergeSort(a);
        for(int i=0;i<n;i++)
        {
            System.out.println(a[i]);
        }
       // System.out.println();
    }

    public BigInteger[] mergeSort(BigInteger [] a)
    {
        if(a.length<=1)
        {
            return a;
        }
        int firstLength=a.length/2;
        int secondLength=a.length-firstLength;
        BigInteger first[]=new BigInteger[firstLength];
        BigInteger second[]=new BigInteger[secondLength];
        System.arraycopy(a,0,first,0,firstLength);
        System.arraycopy(a,firstLength,second,0,secondLength);
        first=mergeSort(first);
        second=mergeSort(second);
        merge(first,second,a);
        return a;
    } 

    public void merge(BigInteger [] first,BigInteger [] second,BigInteger [] a)
    {
        int iFirst=0;
        int iSecond=0;
        int j=0;
        while(iFirst<first.length&&iSecond<second.length)
        {
            if(first[iFirst].compareTo(second[iSecond])==-1)
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
        /*for(int i=iFirst;i<first.length-iFirst;i++)
        {
        	a[j]=first[i];
        }
        for(int i=iSecond;i<second.length-iSecond;i++)
        {
        	a[j]=second[i];
        }*/
       	System.arraycopy(first,iFirst,a,j,first.length-iFirst);
        System.arraycopy(second,iSecond,a,j,second.length-iSecond);
    }

}
