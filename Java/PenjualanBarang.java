import java.util.Scanner;

class PenjualanBarang {
  public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int jumlah, harga_satuan;
		int harga_barang, harga_bayar, potongan=0;

		System.out.print("Masukan Jumlah Barang : ");
		jumlah = scn.nextInt();

		System.out.print("Masukan Harga Satuan : ");
		harga_satuan = scn.nextInt();

		harga_barang = jumlah * harga_satuan;

		if (harga_barang > 1000000) {
			potongan = harga_barang * 10 / 100;
		}
		else if (harga_barang >= 501000 && harga_barang <= 1000000) {
			potongan = harga_barang * 5 / 100;
		}
		else if (harga_barang < 501000) {
			potongan = 0;
		}

		harga_bayar = harga_barang - potongan;

		System.out.println("Harga Barang = " + harga_barang);
		System.out.println("Potongan = " + potongan);
		System.out.println("Harga Bayar = " + harga_bayar);
  }
}
