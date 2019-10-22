object LotOfParameters {
  def main(args: Array[String]): Unit = {
    var Sum = add(1,2,3,4,5,6,7)
    println("Sum is "+Sum)
  }
  def add(args:Int*):Int={
    var ss=0
    for(i <- args){
      ss = ss + i
    }
    ss
  }
}
