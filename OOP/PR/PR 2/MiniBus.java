package Kendaraan;

// Kelas MiniBus yang merupakan turunan dari Kendaraan
public class MiniBus extends Kendaraan {
    // Default constructor
    public MiniBus() {
      super(); // Memanggil constructor default dari kelas induk yaitu Kendaraan
    }
  
    // User-defined constructor
    public MiniBus(int nomor, String merk, int tahun_keluaran) {
      super(nomor, merk, tahun_keluaran); // Memanggil constructor user-defined dari kelas induk yaitu Kendaraan
    }
  
    // Copy constructor
    public MiniBus(MiniBus m) {
      super(m);  // Memanggil copy constructor dari kelas induk yaitu Kendaraan
    }
  
    // Method untuk print informasi kendaraan
    public void printInfo() {
      super.printInfo(); // Memanggil method printInfo dari kelas induk yaitu Kendaraan
      System.out.println("Kategori: MiniBus"); // Print kategori MiniBus
    }
  
    // Method untuk menghitung biaya sewa kelas MiniBus
    public int biayaSewa(int lamaSewa) {
      if (lamaSewa <= 5) {
        return 5000000;
      } 
      else {
        return (5000000 + 500000 * (lamaSewa - 5));
      }
    }
  }