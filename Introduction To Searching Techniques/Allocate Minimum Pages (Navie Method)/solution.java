import java.util.Scanner;

public class Main {
    static int isPossible(int arr[], int n, int m, int mid) {
        int students = 1;
        int pages = 0;

        for (int i = 0; i < n; i++) {
            if (pages + arr[i] <= mid) {
                pages += arr[i];
           