import java.util.*;

public class MCF {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r[] = new int[n];
        int max = 0;
        int pp = 0;
        String s[] = new String[n];
        for(int i  = 0; i < n; i++) {
            int l = 1;
            s[i] = sc.next();
            while(s[i].charAt(l) != '/') l++;
            String a = s[i].substring(0, l);
            String b = s[i].substring(l+1, s[i].length());
            int c = Integer.valueOf(a);
            int d = Integer.valueOf(b);
            for(int j = d; j > 1; j--) {
                if(d%j ==  0 && c%j == 0) {
                	c = c / j;
                	d = d / j;
                	break;
                }
            }
            s[i] = Integer.toString(c)+"/"+Integer.toString(d);
        }
        for(int i = 0; i < n; i++) {
        	r[i] = 0;
            for(int j = 0; j < n; j++) {
            	if(s[i] == s[j] && i != j) {
            		r[i]++;
            	}
            	if(max < r[i]) {
            		max = r[i];
            		pp = i;
            	}
            }
        }
        System.out.println(s[pp]);
        sc.close();
    }
}
