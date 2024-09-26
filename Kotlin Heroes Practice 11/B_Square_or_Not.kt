import java.util.*
import kotlin.math.sqrt

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        sc.nextLine()
        val s = sc.nextLine()
        val len = sqrt(n.toDouble()).toInt()
        if(len * len != n) {
            println("No")
            continue
        }
        var i = 0
        var op = true
        for(j in s.indices) {
            if(i == 0 || i == len - 1) {
                if(s[j] != '1') {
                    op = false
                    break
                }
            }
            else {
                if(j % len in 1 until len - 1) {
                    if(s[j] != '0') {
                        op = false
                        break
                    }
                }
                else {
                    if(s[j] != '1') {
                        op = false
                        break
                    }
                }
            }
            if(j % len == len - 1) i++
        }
        println(if(op) "Yes" else "No")
    }
}