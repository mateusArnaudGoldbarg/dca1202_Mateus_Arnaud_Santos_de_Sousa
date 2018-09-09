
/*
 Se x for declarado como char, e char ocupando 1 byte:
    x+1 = 4093;
    x+2 = 4094;
    x+3 = 4095;
 Se x for declarado como int, e int ocupando 2 bytes:
    x+1 = 4094;
    x+2 = 4096;
    x+3 = 4098;
 Se x for declarado como float, e float ocupando 4 bytes:
    x+1 = 4096;
    x+2 = 4100;
    x+3 = 4104;
 Se x fpr declarado como double,e double ocupando 8 bytes:
    x+1 = 4100;
    x+2 = 4108;
    x+3 = 4116;
*/
