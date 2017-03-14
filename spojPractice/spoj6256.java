//there is something called pigeon hole sort. read about it
import java.io.*;
import java.util.ArrayList;
import java.util.Iterator;

class spoj6256
{
    static int count=0;
    public static void main(String args[])throws IOException
    {
        System.out.print('\u000C');
        System.out.println("");
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number of elements in the array:");
        int n=Integer.parseInt(br.readLine());
        int a[]=new int[n];
        System.out.println("Enter the elements on a single line seperated by space");
        String  lines = br.readLine();    
        String[] strs = lines.trim().split("\\s+");
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(strs[i]);
        }
        spoj6256 obj=new spoj6256();
        a=obj.mergeSort(a);
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        System.out.println();
        System.out.println("cpunt "+count);
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
                count++;
                a[j]=second[iSecond];
                iSecond++;
            }
            j++;
        }
       
        System.arraycopy(first,iFirst,a,j,first.length-iFirst);
        System.arraycopy(second,iSecond,a,j,second.length-iSecond);
    }

}
