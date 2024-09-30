import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    var t = sc.nextInt()
    while(t-- > 0) {
        val n = sc.nextInt()
        val h = sc.nextLong()
        val b = sc.nextLong()
        val arr = Array(2) { "" }
        sc.nextLine()
        arr[0] = sc.nextLine()
        arr[1] = sc.nextLine()
        var sheep = Pair(0, 0)
        val wcount = Array<Long>(n) { 0 }
        for(i in 0 until 2) {
            for(j in 0 until n) {
                if(arr[i][j] == 'S') {
                    sheep = Pair(i, j)
                }
                else if(arr[i][j] == 'W') {
                    wcount[j]++
                }
            }
        }
        for(i in 1 until n) {
            wcount[i] += wcount[i - 1]
        }
        if(wcount[n - 1] == 0L) {
            println(0)
            continue
        }
        val rhunt = (wcount[n - 1] - wcount[sheep.second]) * h
        val lhunt = wcount[sheep.second] * h
        val rblock = if(sheep.second == n - 1 || rhunt == 0L) 0 else b
        val lblock = if(sheep.second == 0 || lhunt == 0L) 0 else b

        val bothblock = lblock + rblock + b
        val bothhunt = lhunt + rhunt
        val lblockrhunt = lblock + rhunt + if(lblock == 0L) 0 else b
        val lhuntrblock = lhunt + rblock + if(rblock == 0L) 0 else b

//        println("lol $lhunt $rhunt $lblock $rblock")

        println(minOf(bothblock, lhuntrblock, bothhunt, lblockrhunt))
    }
}