const int N = 512;

int mat[N][N];
int test;
int n;
int r1, c1, r2, c2;

int main() {
    cin >> test;
    for(int cas = 1; cas <= test; cas ++) {
        cin >> n;
        for(int i = 0; i < 2*n; i ++)
            for(int j = 0; j < 2*n; j ++)
                cin >> mat[i][j];

        int sum = 0;
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < n; j ++) {
                r1 = i;
                r2 = 2*n-i-1;
                c1 = j;
                c2 = 2*n-j-1;
                sum += max(
                    max(mat[r1][c1], mat[r1][c2]),
                    max(mat[r2][c1], mat[r2][c2])
                );
            }
        cout << sum << endl;
    }

    return 0;
