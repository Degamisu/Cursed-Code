// some really complex but useless code
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;

    pthread_key_create(&key, NULL);
    pthread_setspecific(key, value);
    get_specific(key); 
    pthread_setspecific(key, NULL);
    printf("key: %p, value: %p\n", key, value);
}