//
//  main.cpp
//  JPEG-Image-Compression
//
//  Created by admin on 2019-02-06.
//  Copyright © 2019 austinwhitney. All rights reserved.
//

#include "include/mainwindow.h"
#include <QApplication>

int main(int argc, char * argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
