import java.util.*;

class Candidate
{
int rno;
String name;
float score;
String remarks;
Scanner in=new Scanner(System.in);
void reMarks()
{
	if(score>=50)
		remarks="selected";
	else
		remarks="notselected";
}
void enter()
{
	System.out.println("Enter rno: ");
	rno=in.nextInt();
	System.out.println("Enter name: ");
	name=in.next();
	System.out.println("Enter score: ");
	score=in.nextFloat();
	reMarks();
}
void display()
{
	System.out.println("rno="+rno);
	System.out.println("name="+name);
	System.out.println("score="+score);
	System.out.println("Remarks"+remarks);
}
}
class TestCandidate
{
	public static void main(String args[])
	{
		Candidate c1=new Candidate();
		c1.enter();
		c1.display();
		Candidate c2=new Candidate();
		c2.enter();
		c2.display();
		
	}
}

	
