#include<iostream>
#include<queue>
#include<vector>
#include<array>

using namespace std;

int main(int argc, char const *argv[])
{
    int row=0,colums=0;

    int start_y, start_x;
    int goal_y,goal_x;

    cin>>row>>colums>>start_y>>start_x>>goal_y>>goal_x;

    vector<vector<char>> maze(row,vector<char>(colums));

    start_x--;start_y--;goal_x--;goal_y--;

    
    for(int i = 0; i < row; i++)
    {

        for(int k=0;k<colums;k++){
            cin>>maze[i][k];
        }

    }



    
    vector<vector<int>> dist(row,vector<int>(colums));
    queue<pair<int,int>> aisle;

    aisle.emplace(start_y,start_x);

    vector<pair<int,int>> mv_direction{{0,-1},{1,0},{0,1},{-1,0}};


    while(!aisle.empty()){

        pair<int,int> now_place=aisle.front();
        aisle.pop();

        for(int i=0;i<4;++i){ 

            pair<int,int> next;
            next = {now_place.first + mv_direction[i].first,now_place.second + mv_direction[i].second};
            
            if(maze[next.first][next.second]=='.'&&next.first>0&&next.first<row-1&&next.second>0&&next.second<colums-1){
                dist[next.first][next.second]=dist[now_place.first][now_place.second]+1;
                aisle.push(next);
                maze[next.first][next.second]='#';
            
            }

        }

    }


cout<<dist[goal_y][goal_x]<<endl;

    return 0;
}
