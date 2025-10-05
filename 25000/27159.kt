fun main() {
	val N=readLine()!!.toInt()

	val list = readLine()!!.split(" ").map{it.toInt()}
	list.sorted()
	
	var ans=list[0];
	
	for(i in 1 until N){
		if(list[i]-1>list[i-1]){
			ans+=list[i]
		}
	}
	
	println(ans)
    
}