#include <QCoreApplication>
#include<bits/stdc++.h>
#include "RRT.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        Cobs c1(20.0,20.0, 2.0,2.0);
        vector<Cobs> all;
        all.push_back(c1);

        RRTMain rrt(all, 400, 400);
        rrt.welcome();
        vertex aa = make_pair(100,300);
        vertex b = make_pair(10,10);
        rrt.init(aa, b, 5, 5000);
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
