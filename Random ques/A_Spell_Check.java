import java.util.*;

public class A_Spell_Check {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ofreq[] = new int[256];
        ofreq['T']++;
        ofreq['i']++;
        ofreq['m']++;
        ofreq['u']++;
        ofreq['r']++;
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int freq[] = new int[256];
            for(int i=0;i<n;i++) {
                freq[s.charAt(i)]++;
            }
            boolean op = true;
            for(int i=0;i<256;i++) {
                if(ofreq[i]!=freq[i]) {
                    op = false;
                    break;
                }
            }
            System.out.println(op ? "YES" : "NO");
        }
        sc.close();
    }
}