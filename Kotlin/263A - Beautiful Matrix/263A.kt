import kotlin.math.abs

fun main(args: Array<String>) {
    var (m, n, p) = listOf(1,2,3)
    for (i in 0..4){
        val row = readLine()!!.split(" ").map { it.toInt() }.toMutableList()
        if (1 in row) {
            n = i + 1
            for(j in 0..4){
                if (row[j] == 1) m = j + 1
            }
        }
    }
    p = abs(3-m) + abs(3-n)
    println(p)
}