import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val a = sc.nextInt()
        val b = sc.nextInt()
        val c = sc.nextInt()
        var ans = ""
        for(i in 0 until a) {
            ans += (i % 10)
        }
        for(i in 0 until c) {
            val e = 'a' + (i % 26)
            ans += e
        }
        for(i in 0 until b) {
            val e = 'A' + (i % 26)
            ans += e
        }
        println(ans)
    }
}