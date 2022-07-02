class Main
{
  int x;
  Main()
  {
  	x = 4;
  }
} 
class GFG
{
    public static void main(String args[])
    { 
        Main obj1 = new Main();
        Main obj2 = obj1;
        obj2.x++;
        System.out.println(obj1.x + obj2.x); 
    }
} 
