import java.lang.System
import java.util.Scanner
import kotlin.math.max
import kotlin.math.min

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val x = sc.nextInt()
        val y = sc.nextInt()
        println("${min(x,y)} ${max(x,y)}")
    }
}