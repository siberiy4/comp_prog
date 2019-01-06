#include <iostream>

using namespace std;

int main(void){

    int table[32][32] = {0};
    int width_now, hight_now, n, m, t, p;
    int ori_d, ori_c;
    int ana_x, ana_y;
    int ans = 0;

    cin >> n >> m >> t >>p;
    width_now = n;
    hight_now = m;

        for(int i = 0; i < t; i++){
            cin >> ori_d >> ori_c;
            if(ori_d == 1){
                for(int j = width_now + ori_c; j < ori_c; j++){
                    for(int k = 0; k < hight_now; k++){
                        table[j][k] += 1;
                    }
                }
                width_now += ori_c;
            }else if(ori_d == 2){
                for(int j = hight_now + ori_c; j < ori_c; j++){
                    for(int k = 0; k < width_now; k++){
                        table[k][j] += 1;
                    }
                }
                hight_now += ori_c;
            }
        }
        for(int i = 0; i < p; i++){
            cin >> ana_x >> ana_y;
            ans += table[ana_x][ana_y];
        }
        cout << ans << endl;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << table[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}