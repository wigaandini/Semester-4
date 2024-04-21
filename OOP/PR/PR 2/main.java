package Kendaraan;

public class Main {
    public static void main(String[] args) {
        // Membuat objek koleksi kendaraan
        KoleksiKendaraan koleksi = new KoleksiKendaraan();

        // Membuat beberapa objek kendaraan
        Kendaraan bus = new Bus(123, "Mercedes", 2020, 50);
        Kendaraan miniBus = new MiniBus(456, "Toyota", 2018);
        Kendaraan mobil = new Mobil(789, "Honda", 2019, "Dudung");

        // Menambahkan kendaraan ke dalam koleksi
        koleksi.addKendaraan(bus);
        koleksi.addKendaraan(miniBus);
        koleksi.addKendaraan(mobil);

        // Mencetak informasi semua kendaraan dalam koleksi
        koleksi.printAll();
    }
}
