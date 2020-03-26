#include <QCoreApplication>
#include<bits/stdc++.h>
#include "RRT.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        Cobs c1(40.0,40.0, 50.0,50.0);
        Cobs c2(40.0, 200.0, 50.0,50.0);
        vector<Cobs> all;
        all.push_back(c1);
        all.push_back(c2);

        RRTMain rrt(all, 400, 400);
        rrt.welcome();
        vertex aa = make_pair(100,300);
        vertex b = make_pair(10,10);
        rrt.init(aa, b, 5, 10000);
        try{
            rrt.run();
        }catch(exception &e){
            cout<<"Exception.."<<e.what()<<endl;
        }

        rrt.save();

//        cout<<"seen Nodes\n";
//        rrt.tracePath();

    return a.exec();
}
