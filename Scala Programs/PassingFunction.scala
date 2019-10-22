object PassingFunction {
  def main(args: Array[String]): Unit = {
    firstfunction(30,multipyby2)
  }
 def firstfunction(i: Int, func :Int => Any ):Unit= {
   println(func(i))
 }
  def multipyby2(a:Int):Int ={
    a*2
  }
}
