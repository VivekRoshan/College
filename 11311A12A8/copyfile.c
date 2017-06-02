#include<stdio.h>
main(int argc, char *argv[])
{
        FILE *ifp,*ofp;
        char c;
        ifp =fopen(argv[1],"r");
        ofp =fopen(argv[2],"w");
        while((c=getc(ifp))!=EOF)
                putc(c,ofp);
        fclose(ifp);
        fclose(ofp);
        return 0;
}

