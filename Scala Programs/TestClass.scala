class Student(id:Int,name:String){
  def getRecord(): Unit ={
    println(id+" "+name)
  }
}
object TestClass {
  def main(args: Array[String]): Unit = {
    var student1 = new Student(101,"Anand Shukla")
    var student2 = new Student(102,"Amit Tiwari")
    student1.getRecord()
    student2.getRecord()
  }
}
