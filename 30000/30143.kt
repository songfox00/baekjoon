fun main() {
   val T = readLine()!!.toInt()
   
   repeat(T){
		var (N,A,D)=readLine()!!.split(" ").map {it.toInt()}
		
		println((2*A+(N-1)*D)*N/2)
   }
    
}