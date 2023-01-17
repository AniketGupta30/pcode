class Employee
{
float sal=60000;
}
class Programmer extends Employee
{
float b=1500;
float temp= sal + b;
public static void main(String args[])
{
Programmer ob=new Programmer();
System.out.println("Salary amount is:"+ob.sal);
System.out.println(" Extra Bonous is:"+ob.temp);
}
}
