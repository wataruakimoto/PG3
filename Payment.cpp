#include "Payment.h"
#include <stdio.h>

Payment::Payment() {}

Payment::~Payment() {}

void Payment::Pay() {

	printf("あなたは %s で支払いました\n", name);
}