import java.util.*;
import java.lang.*;

public class A_Candy_Bags{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> kid1 = new ArrayList<>();
        ArrayList<Integer> kid2 = new ArrayList<>();
        int i=1,j=n*n;
        while(i<j)
        {
            if(i%2==0)
            {
                kid2.add(i);
                kid2.add(j);
            }
            else
            {
                kid1.add(i);
                kid1.add(j);
            }
            i++;
            j--;
        }
        for(int a : kid1)
        {
            System.out.print(a + " ");
        }
        System.out.println();
        for(int a : kid2)
        {
            System.out.print(a + " ");
        }
        System.out.println();
        sc.close();
    }
}