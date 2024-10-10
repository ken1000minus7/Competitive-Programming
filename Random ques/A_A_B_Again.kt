import java.util.*;

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        println((n / 10) + (n % 10))
    }
}