#include <iomanip>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

//Time Complexity: O(n2)
//Auxiliary Space: O(1)



void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(std::vector<int>& arr)
{

    int array_size = arr.size();
    bool swapped;

    for (int i = 0; i < array_size - 1; i++) {
        swapped = false;
        for (int j = 0; j < array_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}


// Fonction utilitaire pour afficher un vecteur
void printVector(const std::vector<int>& arr, const std::string& message) {
  std::cout << message << ": ";
  for (int num : arr) {
      std::cout << num << " ";
  }
  std::cout << std::endl;
}

// Fonction de test
void test_bubble_sort() {
  // Test 1 : Tableau déjà trié
  {
      std::vector<int> arr = {1, 2, 3, 4, 5};
      std::cout << "\n--- Test 1 : Tableau déjà trié ---" << std::endl;
      printVector(arr, "Avant le tri");
      bubbleSort(arr);
      printVector(arr, "Après le tri ");
      assert(arr == std::vector<int>({1, 2, 3, 4, 5}));
      std::cout << "Test 1 (Tableau déjà trié) : Réussi" << std::endl;
  }

  // Test 2 : Tableau trié dans l'ordre décroissant
  {
      std::vector<int> arr = {5, 4, 3, 2, 1};
      std::cout << "\n--- Test 2 : Tableau trié dans l'ordre décroissant ---" << std::endl;
      printVector(arr, "Avant le tri");
      bubbleSort(arr);
      printVector(arr, "Après le tri ");
      assert(arr == std::vector<int>({1, 2, 3, 4, 5}));
      std::cout << "Test 2 (Tableau trié dans l'ordre décroissant) : Réussi" << std::endl;
  }

  // Test 3 : Tableau avec des éléments en désordre
  {
      std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
      std::cout << "\n--- Test 3 : Tableau avec des éléments en désordre ---" << std::endl;
      printVector(arr, "Avant le tri");
      bubbleSort(arr);
      printVector(arr, "Après le tri ");
      assert(arr == std::vector<int>({11, 12, 22, 25, 34, 64, 90}));
      std::cout << "Test 3 (Tableau avec des éléments en désordre) : Réussi" << std::endl;
  }

  // Test 4 : Tableau avec des éléments répétés
  {
      std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
      std::cout << "\n--- Test 4 : Tableau avec des éléments répétés ---" << std::endl;
      printVector(arr, "Avant le tri");
      bubbleSort(arr);
      printVector(arr, "Après le tri ");
      assert(arr == std::vector<int>({1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9}));
      std::cout << "Test 4 (Tableau avec des éléments répétés) : Réussi" << std::endl;
  }

  // Test 5 : Tableau vide
  {
      std::vector<int> arr = {};
      std::cout << "\n--- Test 5 : Tableau vide ---" << std::endl;
      printVector(arr, "Avant le tri");
      bubbleSort(arr);
      printVector(arr, "Après le tri ");
      assert(arr.empty());
      std::cout << "Test 5 (Tableau vide) : Réussi" << std::endl;
  }

  // Test 6 : Tableau avec un seul élément
  {
      std::vector<int> arr = {42};
      std::cout << "\n--- Test 6 : Tableau avec un seul élément ---" << std::endl;
      printVector(arr, "Avant le tri");
      bubbleSort(arr);
      printVector(arr, "Après le tri ");
      assert(arr == std::vector<int>({42}));
      std::cout << "Test 6 (Tableau avec un seul élément) : Réussi" << std::endl;
  }

  std::cout << "\nTous les tests de bubbleSort ont réussi !" << std::endl;
}

int main() {
  test_bubble_sort();
  return 0;
}
