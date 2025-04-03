import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    val n = sc.nextInt()
    sc.nextLine()
    val s = sc.nextLine()
    val freq = IntArray(26)
    var op = false
    for(c in s) {
        freq[c - 'a']++
        if(freq[c - 'a'] >= 2) op = true
    }
    println(if(op || n == 1) "Yes" else "No")
}