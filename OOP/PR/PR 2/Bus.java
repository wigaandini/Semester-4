package Kendaraan;

// Kelas Bus yang merupakan turunan dari Kendaraan
public class Bus extends Kendaraan {
    // Atribut
    private int kapasitas;

    // Default constructor
    public Bus() {
        super(); // Memanggil constructor default dari kelas induk yaitu Kendaraan
        this.kapasitas = 0; // Set kapasitas default = 0
    }

    // User-defined constructor
    public Bus(int nomor, String merk, int tahun_keluaran, int kapasitas) {
        super(nomor, merk, tahun_keluaran); // Memanggil constructor user-defined dari kelas induk yaitu Kendaraan
        this.kapasitas = kapasitas;
    }

    // Copy constructor
    public Bus(Bus b) {
        super(b); // Memanggil copy constructor dari kelas induk yaitu Kendaraan
        this.kapasitas = b.kapasitas;
    }

    // Method untuk print informasi kendaraan
    public void printInfo() {
        super.printInfo(); // Memanggil method printInfo dari kelas induk yaitu Kendaraan
        System.out.println("Kategori: Bus"); // Print kategori Bus
        System.out.println("Kapasitas: " + kapasitas); // Print kapasitas bus
    }

    // Method untuk menghitung biaya sewa kelas Bus
    public int biayaSewa(int lamaSewa) {
        return lamaSewa * 1000000;
    }
}