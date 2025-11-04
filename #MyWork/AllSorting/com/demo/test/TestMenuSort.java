package com.demo.test;

import java.util.Scanner;
import com.demo.sorting.SortingService;

public class TestMenuSort {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        while (true) {
            System.out.println("\n=== SORTING MENU ===");
            System.out.println("1. Bubble Sort");
            System.out.println("2. Selection Sort");
            System.out.println("3. Insertion Sort");
            System.out.println("4. Merge Sort");
            System.out.println("5. Quick Sort");
            System.out.println("6. Counting Sort");
            System.out.println("0. Exit");
            System.out.print("Choose: ");
            int choice = Integer.parseInt(sc.nextLine());

            switch (choice) {
                case 1 -> SortingService.runBubbleSort();
                case 2 -> SortingService.runSelectionSort();
                case 3 -> SortingService.runInsertionSort();
                case 4 -> SortingService.runMergeSort();
                case 5 -> SortingService.runQuickSort();
                case 6 -> SortingService.runCountingSort();
                case 0 -> {
                    System.out.println("Bye!");
                    sc.close();
                    return;
                }
                default -> System.out.println("Invalid choice.");
            }
        }
    }
}