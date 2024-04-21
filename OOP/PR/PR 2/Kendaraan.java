package Kendaraan;

// Kelas abstrak Kendaraan
abstract class Kendaraan {
  // Atribut
  protected int nomor;
  protected String merk;
  protected int tahun_keluaran;

  // Default constructor
  public Kendaraan() {
    this.nomor = 0;
    this.merk = "";
    this.tahun_keluaran = 0;
  }

  // User-defined constructor
  public Kendaraan(int nomor, String merk, int tahun_keluaran) {
    this.nomor = nomor;
    this.merk = merk;
    this.tahun_keluaran = tahun_keluaran;
  }

  // Copy constructor
  public Kendaraan(Kendaraan k) {
    this.nomor = k.nomor;
    this.merk = k.merk;
    this.tahun_keluaran = k.tahun_keluaran;
  }

  // Method untuk print informasi kendaraan
  public void printInfo() {
    System.out.println("Nomor: " + nomor);
    System.out.println("Merk: " + merk);
    System.out.println("Tahun Keluaran: " + tahun_keluaran);
  }

  // Method abstrak untuk menghitung biaya sewa
  abstract int biayaSewa(int lamaSewa);
}