#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits> // Para numeric_limits

using namespace std;

struct Materia {
    string nombre;
    double calif1;
    double calif2;
    double calif3;
    
    double promedio() const {
        return (calif1 + calif2 + calif3) / 3.0;
    }
    
    string observacion() const {
        return (promedio() >= 60.0) ? "APROBADO" : "REPROBADO";
    }
};

struct Alumno {
    string nombre;
    vector<Materia> materias;
    
    int totalMaterias() const {
        return materias.size();
    }
    
    double promedioAlumno() const {
        if (materias.empty()) return 0.0;
        double suma = 0.0;
        
        // Bucle tradicional en lugar de range-based for
        for (size_t i = 0; i < materias.size(); i++) {
            suma += materias[i].promedio();
        }
        
        return suma / materias.size();
    }
    
    string observacionAlumno() const {
        return (promedioAlumno() >= 60.0) ? "APROBADO" : "REPROBADO";
    }
};

void imprimirLinea() {
    cout << "+-----------------+-------------------+--------------+-------------+" << endl;
}

void imprimirReporte(const Alumno& alumno) {
    // Encabezado del reporte
    imprimirLinea();
    cout << "| NOMBRE          | REPORTE DE MATERIAS CURSADAS                |" << endl;
    imprimirLinea();
    cout << "|                 | MATERIA          | CALIF. FINAL | OBSERVACION |" << endl;
    imprimirLinea();
    
    // Datos del alumno y materias
    for (size_t i = 0; i < 3; i++) {
        cout << "| " << left << setw(15);
        if (i == 0) {
            cout << alumno.nombre << " | ";
        } else {
            cout << " " << " | ";
        }
        
        if (i < alumno.materias.size()) {
            cout << setw(17) << alumno.materias[i].nombre << " | "
                 << setw(12) << fixed << setprecision(2) << alumno.materias[i].promedio() << " | "
                 << setw(11) << alumno.materias[i].observacion() << " |" << endl;
        } else {
            cout << setw(17) << "-" << " | "
                 << setw(12) << "-" << " | "
                 << setw(11) << "-" << " |" << endl;
        }
        imprimirLinea();
    }
    
    // Totales del alumno
    cout << "| TOTAL ALUMNO: " << setw(2) << alumno.totalMaterias() << " | "
         << setw(17) << "MATERIAS" << " | PROMEDIO: " << setw(6) << alumno.promedioAlumno()
         << " | " << setw(11) << alumno.observacionAlumno() << " |" << endl;
    imprimirLinea();
}

int main() {
    Alumno alumno;
    
    cout << "SISTEMA DE REPORTE DE CALIFICACIONES\n";
    cout << "------------------------------------\n\n";
    
    cout << "Nombre del alumno: ";
    getline(cin, alumno.nombre);
    
    // Ingreso de las 3 materias
    for (int i = 0; i < 3; i++) {
        Materia materia;
        cout << "\nMATERIA #" << (i+1) << "\n";
        cout << "Nombre de la materia: ";
        getline(cin, materia.nombre);
        
        cout << "Calificacion 1: ";
        while (!(cin >> materia.calif1) || materia.calif1 < 0 || materia.calif1 > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Ingrese una calificacion valida (0-100): ";
        }
        
        cout << "Calificacion 2: ";
        while (!(cin >> materia.calif2) || materia.calif2 < 0 || materia.calif2 > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Ingrese una calificacion valida (0-100): ";
        }
        
        cout << "Calificacion 3: ";
        while (!(cin >> materia.calif3) || materia.calif3 < 0 || materia.calif3 > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Ingrese una calificacion valida (0-100): ";
        }
        
        cin.ignore(); // Limpiar el buffer
        alumno.materias.push_back(materia);
    }
    
    cout << "\n\nREPORTE FINAL:\n";
    imprimirReporte(alumno);
    
    return 0;
}
