import java.util.*;

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        sc.nextLine()
        val s1 = sc.nextLine()
        val s2 = sc.nextLine()
        var op = true
        for(i in 0 until n) {
            if(s1[i] != s2[i] && !((s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G'))) {
                op = false 
                break
            }
        }
        if(op) {
            println("YES")
        } else {
            println("NO")
        }
    }
}