import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        sc.nextLine()
        val s = sc.nextLine()
        val dash = s.count { it == '-' }.toLong()
        val under = s.count { it == '_' }.toLong()
        val indi = dash / 2
        println((dash - indi) * indi * under)
    }
}