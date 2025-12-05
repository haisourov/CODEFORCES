fun main(args: Array<String>) {
    var input1 = readln().uppercase()
    var input2 = readln().uppercase()
    val len = input1.length
    for (i in 0..len-1){
        if (input1[i] == input2[i]) continue
        else if (input1[i] >= input2[i]){
            println("1")
            return
        }
        else {
            println("-1")
            return
        }
    }
    println("0")
}