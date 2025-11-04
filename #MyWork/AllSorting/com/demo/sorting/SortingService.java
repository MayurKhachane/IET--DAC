package com.demo.sorting;

import java.util.Arrays;
import java.util.Scanner;

public class SortingService {

    private static final Scanner sc = new Scanner(System.in);

    // === BUBBLE SORT (from your BubbleSortAlgorithm) ===
    private static void bubbleSortImproved(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            boolean flag = false;
            for (int j = 1; j < arr.length - i; j++) {
                if (arr[j - 1] > arr[j]) {
                    flag = true;
                    int temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
            System.out.println("Iteration: " + i);
            System.out.println(Arrays.toString(arr));
            if (!flag) break;
        }
    }

    private static void bubbleSortImprovedDescending(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            boolean flag = false;
            for (int j = 1; j < arr.length - i; j++) {
                if (arr[j - 1] < arr[j]) {
                    flag = true;
                    int temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
            System.out.println("Iteration: " + i);
            System.out.println(Arrays.toString(arr));
            if (!flag) break;
        }
    }

    public static void runBubbleSort() {
        int[] arr = {21, 2, 5, 1, 7, 8, 10, 3};
        System.out.println("Original: " + Arrays.toString(arr));
        System.out.print("1) Asc  2) Desc: ");
        int o = Integer.parseInt(sc.nextLine());
        
        if (o == 1) {
            System.out.println("\n--- Bubble Sort Ascending ---");
            bubbleSortImproved(arr);
        } else {
            System.out.println("\n--- Bubble Sort Descending ---");
            bubbleSortImprovedDescending(arr);
        }
        
        System.out.println("Final: " + Arrays.toString(arr));
    }

    // === SELECTION SORT ===
    private static int findNthMin(int[] arr, int start) {
        int minpos = start;
        int min = arr[minpos];
        for (int i = start; i < arr.length; i++) {
            if (min > arr[i]) {
                minpos = i;
                min = arr[i];
            }
        }
        return minpos;
    }

    private static void selectionSortAscending(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            int minpos = findNthMin(arr, i);
            int temp = arr[i];
            arr[i] = arr[minpos];
            arr[minpos] = temp;
            System.out.println(Arrays.toString(arr));
        }
    }

    private static int findNthMax(int[] arr, int start) {
        int maxpos = start;
        int max = arr[maxpos];
        for (int i = start; i < arr.length; i++) {
            if (max < arr[i]) {
                maxpos = i;
                max = arr[i];
            }
        }
        return maxpos;
    }

    private static void selectionSortDescending(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            int maxpos = findNthMax(arr, i);
            int temp = arr[i];
            arr[i] = arr[maxpos];
            arr[maxpos] = temp;
            System.out.println(Arrays.toString(arr));
        }
    }

    public static void runSelectionSort() {
        int[] arr = {15, 13, 30, 20, 5, 7, 21, 2};
        System.out.println("Original: " + Arrays.toString(arr));
        System.out.print("1) Asc  2) Desc: ");
        int o = Integer.parseInt(sc.nextLine());
        if (o == 1) {
            System.out.println("\n--- Selection Sort Ascending ---");
            selectionSortAscending(arr);
        } else {
            System.out.println("\n--- Selection Sort Descending ---");
            selectionSortDescending(arr);
        }
        System.out.println("Final: " + Arrays.toString(arr));
    }

    // === INSERTION SORT ===.............................................
    private static void insertionSortAscending(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
            System.out.println(Arrays.toString(arr));
        }
    }

    private static void insertionSortDescending(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
            System.out.println(Arrays.toString(arr));
        }
    }

    public static void runInsertionSort() {
        int[] arr = {21, 11, 13, 22, 25, 7, 10, 8, 1};
        System.out.println("Original: " + Arrays.toString(arr));
        System.out.print("1) Asc  2) Desc: ");
        int o = Integer.parseInt(sc.nextLine());
        if (o == 1) {
            System.out.println("\n--- Insertion Sort Ascending ---");
            insertionSortAscending(arr);
        } else {
            System.out.println("\n--- Insertion Sort Descending ---");
            insertionSortDescending(arr);
        }
        System.out.println("Final: " + Arrays.toString(arr));
    }

    // === MERGE SORT ===
    private static void merge(int[] arr, int start, int mid, int end) {
        int n1 = mid - start + 1;
        int n2 = end - mid;
        int[] left = new int[n1];
        int[] right = new int[n2];
        for (int i = 0; i < n1; i++) left[i] = arr[start + i];
        for (int i = 0; i < n2; i++) right[i] = arr[mid + 1 + i];
        int i = 0, j = 0, k = start;
        while (i < n1 && j < n2) {
            if (left[i] < right[j]) {
                arr[k++] = left[i++];
            } else {
                arr[k++] = right[j++];
            }
        }
        while (i < n1) arr[k++] = left[i++];
        while (j < n2) arr[k++] = right[j++];
        System.out.println(start + "," + mid + "," + end);
        System.out.println(Arrays.toString(left));
        System.out.println(Arrays.toString(right));
        System.out.println("------------------------------------");
    }

    private static void mergeSortAscending(int[] arr, int start, int end) {
        if (start < end) {
            int mid = (start + end) / 2;
            mergeSortAscending(arr, start, mid);
            mergeSortAscending(arr, mid + 1, end);
            merge(arr, start, mid, end);
        }
    }

    public static void runMergeSort() {
        int[] arr = {20, 5, 7, 11, 21, 2, 7, 25, 30, 3};
        System.out.println("Original: " + Arrays.toString(arr));
        System.out.println("\n--- Merge Sort Ascending ---");
        mergeSortAscending(arr, 0, arr.length - 1);
        System.out.println("Final: " + Arrays.toString(arr));
    }

    // === QUICK SORT ===
    private static int partition(int[] arr, int start, int end) {
        int pivot = start;
        int i = start;
        int j = end;
        
        while (i < j) {
            while (i < end && arr[i]<= arr[pivot]) i++;
            
            while (j > start && arr[j] > arr[pivot]) j--;
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        
        if (pivot != j) {
        	
            int temp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = temp;
        }
        
        System.out.println(Arrays.toString(arr));
        System.out.println("pivot position : " + j + " Pivot number : " + arr[j]);
        return j;
    }

    private static void quicksort(int[] arr, int start, int end) {
        if (start < end) {
            int p = partition(arr, start, end);
            quicksort(arr, start, p - 1);
            quicksort(arr, p + 1, end);
        }
    }

    public static void runQuickSort() {
        int[] arr = {5, 3, 8, 1, 4, 6, 2, 7};
        System.out.println("Original: " + Arrays.toString(arr));
        System.out.println("\n--- Quick Sort Ascending ---");
        quicksort(arr, 0, arr.length - 1);
        System.out.println("Final: " + Arrays.toString(arr));
    }

    // === COUNTING SORT ===
    private static int findMax(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (max < arr[i])
            	max = arr[i];
        }
        return max;
    }

    
    
    private static int[] countingSortAscending(int[] arr) {
        int max = findMax(arr);
        int[] count = new int[max + 1];
        for (int i = 0; i < count.length; i++) count[i] = 0;
        for (int i = 0; i < arr.length; i++) count[arr[i]]++;
        System.out.println("count array");
        System.out.println(Arrays.toString(count));
        for (int i = 1; i < count.length; i++) count[i] += count[i - 1];
        System.out.println("Cummulative sum");
        System.out.println(Arrays.toString(count));
        int[] output = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            int pos = arr[i];
            count[pos]--;
            int idx = count[pos];
            output[idx] = arr[i];
        }
        System.out.println(Arrays.toString(output));
        return output;
    }

    
    public static void runCountingSort() {
        int[] arr = {6, 5, 4, 8, 6, 9, 5, 3, 4, 6, 9};
        System.out.println("Original: " + Arrays.toString(arr));
        System.out.println("\n--- Counting Sort Ascending ---");
        int[] res = countingSortAscending(arr);
        System.out.println("Final: " + Arrays.toString(res));
    }
}