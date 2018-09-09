
    //p=i; -> Ilegal

    //q=&j; -> Legal

    //p=&*&i; -> Legal

    //i=(*&)j; -> Ilegal

    //i=*&j; -> Ilegal

    //i=*&*&j; -> Ilegal

    //q=*p; -> Legal

    //i=(*p)++ + *q; -> Legal
