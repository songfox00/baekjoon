import kotlin.math.*

fun main(){
    val n = readln().toInt()

    repeat(n){
        var str=readln()
        val len=sqrt(str.length.toDouble()).toInt()
        var letter=Array(len){Array(len,{' '})}

        var idx=0
        for(i in 0 until len){
            for(j in 0 until len){
                letter[i][j]=str[idx++]
            }
        }

        for(j in len-1 downTo 0){
            for(i in 0 until len){
                print(letter[i][j])
            }
        }

        println()
    }
}