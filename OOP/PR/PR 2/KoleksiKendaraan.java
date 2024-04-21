package Kendaraan;

// Kelas KoleksiKendaraan
public class KoleksiKendaraan {
    // Atribut
    private int size;
    private int Neff;
    private Kendaraan koleksi[];
  
    // Default constructor
    public KoleksiKendaraan() {
        this.size = 10;
        this.Neff = 0;
        this.koleksi = new Kendaraan[this.size];
    }
  
    // User-defined constructor
    public KoleksiKendaraan(int size) {
        this.size = size;
        this.Neff = 0;
        this.koleksi = new Kendaraan[this.size];
    }
  
    // Copy constructor
    public KoleksiKendaraan(KoleksiKendaraan kd) {
        this.size = kd.size;
        this.Neff = kd.Neff;
        this.koleksi = new Kendaraan[this.size];
        for (int i = 0; i < this.Neff; i++) {
            this.koleksi[i] = kd.koleksi[i];
        }
    }
  
    // Method untuk print semua informasi dari kendaraan pada koleksi kendaraan
    public void printAll() {
        for (int i = 0; i < this.Neff; i++) {
            this.koleksi[i].printInfo();
        }
    }
  
    // Method untuk menambah kendaraan ke dalam koleksi kendaraan
    public void addKendaraan(Kendaraan k) {
        if (this.Neff == this.size) {
            Kendaraan k1[] = new Kendaraan[this.size * 2];
            for (int i = 0; i < this.Neff; i++) {
                k1[i] = this.koleksi[i];
            }
            this.koleksi = k1;
            this.size *= 2;
        }
        this.koleksi[this.Neff] = k;
        this.Neff++;
    }
  
    // Method untuk menambah koleksi kendaraan ke dalam koleksi kendaraan
    public void addKoleksiKendaraan(KoleksiKendaraan kd) {
        if (this.Neff + kd.Neff > this.size) {
            Kendaraan k1[] = new Kendaraan[this.size * 2];
            for (int i = 0; i < this.Neff; i++) {
                k1[i] = this.koleksi[i];
            }
            this.koleksi = k1;
            this.size *= 2;
        }
        for (int i = 0; i < kd.Neff; i++) {
            this.koleksi[this.Neff] = kd.koleksi[i];
            this.Neff++;
        }
    }
  }