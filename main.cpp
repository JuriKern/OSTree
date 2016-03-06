#include <stdio.h>
#include <ctime>
#include <string>

#include "node.h"
#include "scanner.h"

int main(int argc, const char * argv[]) {
    std::clock_t startTime = std::clock();
    
    printf("Build tree...\n");
    
    Scanner scanner;
    Node* mountNode = new Node();
    
    mountNode->Accept(scanner);
    
    std::clock_t endTime = std::clock();
    double elapsedTime = (double)(endTime - startTime);
    
    delete mountNode;
    
    printf("Done\nTime elapsed: %.2fms\n", elapsedTime);
    
    return 0;
}