#include <stdio.h>
int main(){
    float lat;
    float lon;
    char info[80];
    int started =0;
    puts("[");
    while(scanf("%f,%f,%79[^\r\n]",&lat,&lon,info)==3){
        if (started)
            printf(",\n");
        else
            started++;
        printf("{\"latitude\": %f, \"longtitude\": %f, \"info\": \"%s\"}",lat,lon,info);
        puts("\n]");
    }
}

