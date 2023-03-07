class Patient {
private:
    int patientNumber;

public:
    // Constructor
    Patient(int number);

    // Getter function
    int getPatientNumber();

    // Setter function
    void setPatientNumber(int number);
};

// Constructor definition
Patient::Patient(int number) {
    patientNumber = number;
}

// Getter function definition
int Patient::getPatientNumber() {
    return patientNumber;
}

// Setter function definition
void Patient::setPatientNumber(int number) {
    patientNumber = number;
}