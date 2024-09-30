import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        print("1 ")
        for(i in n downTo 2) {
            print("$i ")
        }
        println()
    }
}