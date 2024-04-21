package Kendaraan;

// Kelas Mobil yang merupakan turunan dari Kendaraan
public class Mobil extends Kendaraan {
    // Atribut
    private String supir;
  
    // Default constructor
    public Mobil() {
        super(); // Memanggil constructor default dari kelas induk yaitu Kendaraan
        this.supir = ""; // Set supir default = ""
    }
  
    // User-defined constructor
    public Mobil(int nomor, String merk, int tahun_keluaran, String supir) {
        super(nomor, merk, tahun_keluaran); // Memanggil constructor user-defined dari kelas induk yaitu Kendaraan
        this.supir = supir;
    }
  
    // Copy constructor
    public Mobil(Mobil m) {
        super(m);
        this.supir = m.supir;
    }
  
    // Method untuk print informasi kendaraan
    public void printInfo() {
        super.printInfo(); // Memanggil method printInfo dari kelas induk yaitu Kendaraan
        System.out.println("Kategori: Mobil"); // Print kategori Mobil
        System.out.println("Supir: " + supir); // Print nama supir
    }
  
    // Method untuk menghitung biaya sewa kelas Mobil
    public int biayaSewa(int lamaSewa) {
        return lamaSewa * 500000;
    }
  }