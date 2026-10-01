#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

int main() {
    struct Patient patients[100];
    int count = 0;
    int choice;
    int id;
    int found;

    while (1) {
        printf("\n===== Hospital Patient Record System =====\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Patient ID: ");
            scanf("%d", &patients[count].id);

            printf("Enter Patient Name: ");
            scanf(" %[^\n]", patients[count].name);

            printf("Enter Age: ");
            scanf("%d", &patients[count].age);

            printf("Enter Disease: ");
            scanf(" %[^\n]", patients[count].disease);

            count++;
            printf("Patient record added successfully!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("No patient records available.\n");
            } else {
                printf("\n----- Patient Records -----\n");

                for (int i = 0; i < count; i++) {
                    printf("\nPatient ID: %d\n", patients[i].id);
                    printf("Name: %s\n", patients[i].name);
                    printf("Age: %d\n", patients[i].age);
                    printf("Disease: %s\n", patients[i].disease);
                }
            }
        }
        else if (choice == 3) {
            printf("Enter Patient ID to search: ");
            scanf("%d", &id);

            found = 0;

            for (int i = 0; i < count; i++) {
                if (patients[i].id == id) {
                    printf("\nPatient Found!\n");
                    printf("Patient ID: %d\n", patients[i].id);
                    printf("Name: %s\n", patients[i].name);
                    printf("Age: %d\n", patients[i].age);
                    printf("Disease: %s\n", patients[i].disease);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Patient not found.\n");
            }
        }
        else if (choice == 4) {
            printf("Thank you!\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
