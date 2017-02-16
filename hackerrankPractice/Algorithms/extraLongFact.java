import java.io.*;
import java.util.Arrays;
import java.math.*;
class extraLongFact
{   
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        
            int n=Integer.parseInt(br.readLine());

            //double startTime = System.currentTimeMillis();
            BigInteger big=BigInteger.ONE;
            //System.out.println(big);
            //System.out.println();
            for(int i=1;i<=n;i++)
            {
                big=big.multiply(BigInteger.valueOf(i));
            }
            System.out.println(big);
            //System.out.println();
            /*double endTime   = System.currentTimeMillis();
            double totalTime = endTime - startTime;*/
            //System.out.println("time "+totalTime);
        }
    }
