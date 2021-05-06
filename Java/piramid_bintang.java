import java.util.Scanner;
class Main {
  public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int tinggi;
		System.out.print("Masukan Tinggi Piramid : ");
		tinggi = scn.nextInt();

		for(int aa=1, bb=tinggi; aa <= tinggi; aa++, bb--) {
			for(int i=1; i <= bb; i++) {
				System.out.print("  ");
			}
			for(int i=1; i <= (aa*2-1); i++) {
				System.out.print("* ");
			}
			System.out.println();
		}
  }
}
