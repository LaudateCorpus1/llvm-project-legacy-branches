// RUN: %llvmgcc -S %s -o - | llvm-as -f -o /dev/null

void test(enum foo *X) {
}

