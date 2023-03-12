import scala.io.StdIn._

object Main extends App {
  private val testCases = readInt()

  for(i <- 1 to testCases){
    val arrayLength = readInt()
    val numbers = readLine().split(" ").map(_.toInt)

    val sortedNumbers = numbers.sorted

    val advantages = numbers.map{ number =>
      if (number == sortedNumbers.last){
        number - sortedNumbers(sortedNumbers.length - 2)
      }
      else{
        number - sortedNumbers.last
      }
    }

    println(advantages.mkString(" "))
  }
}