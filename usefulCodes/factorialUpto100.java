import java.io.*;
import java.util.Arrays;
import java.math.*;
class factorialUpto100
{   
    public static void main(String args[])throws IOException
    {
        System.out.print('\u000C');
        System.out.println("");
        System.out.println("");
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        for(int j=1;j<=t;j++)
        {
            int n=Integer.parseInt(br.readLine());

            double startTime = System.currentTimeMillis();
            BigInteger big=BigInteger.ONE;
            System.out.println(big);
            System.out.println();
            for(int i=1;i<=n;i++)
            {
                big=big.multiply(BigInteger.valueOf(i));
            }
            System.out.println(big);
            System.out.println();
            double endTime   = System.currentTimeMillis();
            double totalTime = endTime - startTime;
            System.out.println("time "+totalTime);
        }
    }
}
