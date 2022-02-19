#pragma warning(disable:4996)

#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int is_ok = EXIT_FAILURE;
    FILE* fp = std::fopen("/tmp/test.txt", "w+");

    if (!fp) {
        std::perror("File opening failed");
        return is_ok;
    }

    int c; 
    
    while ((c = std::fgetc(fp)) != EOF) { 
        std::putchar(c);
    }

    if (std::ferror(fp)) {
        std::puts("I/O error when reading");
    } else if (std::feof(fp)) {
        std::puts("End of file reached successfully");
        is_ok = EXIT_SUCCESS;
    }

    std::fclose(fp);

    _getch();
    return is_ok;
}