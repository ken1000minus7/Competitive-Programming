import java.util.*;

fun main() {
    val sc = Scanner(System.`in`)
    val n = sc.nextInt()
    sc.nextLine()
    val s = sc.nextLine()
    var i = 0
    var diff = 1
    var ans = ""
    while(i < n) {
        ans += s[i]
        i += diff 
        diff++
    }
    println(ans)
    sc.close()
}