/*과제3 
 * 아래의 코드를 활용하여 "과제3.PNG"과 같이 실행되는 가위, 바위, 보 게임 완성
 * 키보드로 1,2,3 중 하나 입력하고, 난수와 키보드로 입력한 값을 비교하여 누가 이겼는지 출력
 * 프로그램 종료 전에 결과 출력
 * 제출 파일: "h학번.java" 소스 파일 
*/
package javabook.hw;
import java.util.Scanner;//키보드 입력 클래스 사용을 위해 선언
import java.util.Random;//랜덤 클래스 사용을 위해 선언
public class h2017xxxxxx
{
	public static void main(String[] args) 
	{	// TODO Auto-generated method stub
		int in, r;
		int win = 0, lose = 0, tie= 0;
		Scanner scan = new Scanner(System.in);//입력을 위한 인스턴스 생성
		Random rand = new Random();//랜덤을 위한 인스턴스 생성
		for(int i=0; i<5; i++)
		{
			System.out.printf("진행: %d/5\n",i+1);
			System.out.print("가위바위보 입력(1~3): ");
			in = scan.nextInt();//키보드 입력 메소드 실행
			r = rand.nextInt(3)+1;//1 ~ 3 난수 반환 메소드 실행
			
			if (r==1) //가위
				if (in ==2) { //바위 
					System.out.println("플레이어 승!");
					win +=1;
				}
				else if (in ==3){ //보
					System.out.println("플레이어 패!");
					lose +=1;
				}
				else {//가위
					System.out.println("비김!");
					tie +=1;
				}
			else if (r==2) //바위
				if (in ==3){ //보
					System.out.println("플레이어 승!");
					win +=1;
				}
				else if (in ==1){ //가위
					System.out.println("플레이어 패!");
					lose +=1;
				}
				else { //바위
					System.out.println("비김!");
					tie +=1;
				}
			else //보
				if (in ==1){ //가위
					System.out.println("플레이어 승!");
					win +=1;
				}
				else if (in ==2) {//바위
					System.out.println("플레이어 패!");
					lose +=1;
				}
				else{ //보
					System.out.println("비김!");
					tie +=1;
				}
			
		}
		System.out.printf("결과 : %d승 %d무 %d패",win, tie, lose);
	}
}
