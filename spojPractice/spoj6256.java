import java.io.*;
import java.util.ArrayList;
import java.util.Iterator;
class spoj6256
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        long t=Long.parseLong(br.readLine());
        while(t--!=0)
        {
            int n=Integer.parseInt(br.readLine());
            long  a[]=new long[n];   
            for(int i=0;i<n;i++)
                a[i]=Long.parseLong(br.readLine());
            spoj6256 obj=new spoj6256();
            long ans=obj.mergeSort(a);
            System.out.println(ans);
        }
    }

    long mergeSort(long [] a)
    {
        if(a.length<=1)
        {
            return 0;
        }
        int firstLength=a.length/2;
        int secondLength=a.length-firstLength;
        long first[]=new long[firstLength];
        long second[]=new long[secondLength];
        System.arraycopy(a,0,first,0,firstLength);
        System.arraycopy(a,firstLength,second,0,secondLength);
        long x=mergeSort(first);
        long y=mergeSort(second);
        long z=merge(first,second,a);
        return x+y+z;
    } 

    public long merge(long [] first,long [] second,long [] a)
    {
        int iFirst=0;
        int iSecond=0;
        int j=0;
        int z=0;
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
                z+=first.length-iFirst;
            }
            j++;
        }
        System.arraycopy(first,iFirst,a,j,first.length-iFirst);
        System.arraycopy(second,iSecond,a,j,second.length-iSecond);
        return z;
    }
}
