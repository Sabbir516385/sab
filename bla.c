#include <stdio.h>
#include <string.h>

int main() {
    char A[11];  // স্ট্রিং A এর জন্য স্থান আবার সরবরাহ করা হচ্ছে, সর্বাধিক স্ট্রিং সাইজ 10
    char B[11];  // স্ট্রিং B এর জন্য স্থান আবার সরবরাহ করা হচ্ছে, সর্বাধিক স্ট্রিং সাইজ 10

    // স্ট্রিং A এবং B পড়া হচ্ছে
    scanf("%s", A);
    scanf("%s", B);

    // A এবং B স্ট্রিংগুলির সাইজ প্রিন্ট করা হচ্ছে
    int size_A = strlen(A);
    int size_B = strlen(B);
    printf("%d %d\n", size_A, size_B);

    // A এবং B স্ট্রিংগুলি যোগ করা হচ্ছে
    strcat(A, B);
    printf("%s\n", A);

    // A এবং B স্ট্রিংগুলির প্রথম অক্ষরগুলি পরিস্করণ করা হচ্ছে
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);

    return 0;
}

