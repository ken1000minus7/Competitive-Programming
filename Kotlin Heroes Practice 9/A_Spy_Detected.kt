import java.util.*;

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val arr = Array<Int>(n) {0}
        for(i in 0 until n) {
            arr[i] = sc.nextInt()
        }
        var ans = n
        for(i in 0 until (n - 1)) {
            if(arr[i] != arr[i + 1]) {
                if(i == n - 2) {
                    ans = n
                }
                else if(arr[i] == arr[n - 1]) {
                    ans = i + 2
                }
                else ans = i + 1
                break
            }
        }
        println(ans)
    }
    sc.close()
}