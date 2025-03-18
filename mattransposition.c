void transpose(double* matrix, int N) {
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++) {
            double temp = matrix[i * N + j];
            matrix[i * N + j] = matrix[j * N + i];
            matrix[j * N + i] = temp;
        }
}
