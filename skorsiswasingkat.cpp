#include <iostream>
#include <string>
using namespace std;

struct studentType {
    string firstName;
    string lastName;
    int score;
    char grade;
};

int main() {
    const int NUM_STUDENTS = 20;

    // Data 20 mahasiswa Indonesia
    studentType students[NUM_STUDENTS] = {
        {"Ahmad", "Pratama", 85, ' '},
        {"Budi", "Santoso", 92, ' '},
        {"Citra", "Wulandari", 78, ' '},
        {"Dewi", "Lestari", 88, ' '},
        {"Eko", "Saputra", 95, ' '},
        {"Fajar", "Hidayat", 67, ' '},
        {"Gita", "Putri", 73, ' '},
        {"Hari", "Kurniawan", 81, ' '},
        {"Intan", "Sari", 90, ' '},
        {"Joko", "Susanto", 59, ' '},
        {"Kiki", "Amalia", 100, ' '},
        {"Lina", "Rahmawati", 72, ' '},
        {"Nina", "Sulastri", 85, ' '},
        {"Made", "Bali", 91, ' '},
        {"Oka", "Mahendra", 64, ' '},
        {"Qodir", "Wijaya", 75, ' '},
        {"Rina", "Siregar", 83, ' '},
        {"Sinta", "Agustina", 97, ' '},
        {"Tono", "Prasetyo", 68, ' '},
        {"Ulya", "Fitriani", 90, ' '}
    };

    // Tentukan grade berdasarkan skor
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int s = students[i].score;
        if (s >= 90) students[i].grade = 'A';
        else if (s >= 80) students[i].grade = 'B';
        else if (s >= 70) students[i].grade = 'C';
        else if (s >= 60) students[i].grade = 'D';
        else students[i].grade = 'F';
    }

    // Cari nilai tertinggi
    int highest = students[0].score;
    for (int i = 1; i < NUM_STUDENTS; i++)
        if (students[i].score > highest)
            highest = students[i].score;

    // Tampilkan semua data mahasiswa
    cout << "--- Daftar Nilai Mahasiswa ---\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << students[i].lastName << ", " << students[i].firstName
             << "   Nilai: " << students[i].score
             << "   Grade: " << students[i].grade << endl;
    }

    // Tampilkan nilai tertinggi dan siapa saja
    cout << "\nNilai tertinggi: " << highest << endl;
    cout << "Mahasiswa dengan nilai tertinggi:\n";
    for (int i = 0; i < NUM_STUDENTS; i++)
        if (students[i].score == highest)
            cout << "- " << students[i].lastName << ", " << students[i].firstName << endl;

    return 0;
}
