// 수의 특정 비트값 확인
boolean getBit(int num, int i){
    return ((num & (1 << i)) != 0);
}

// 수의 특정 비트값 채워넣기
boolean setBit(int num, int i) {
    return num | (1 << i);
}

// 수의 특정 비트 / 일부분 삭제하기
int clearBit(int num, int i) {
    int mask = ~(1 << i);
    return num & mask;
}

int clearBitsMSBthroughI(int num, int i) {
    int mask = (1 << i) - 1;
    return num & mask;
}

int clearBitsIthrough0(int num, int i) {
    int mask = (-1 << (i + 1));
    return num & mask;
}

// 비트값 바꾸기
int updateBit(int num, int i, boolean bitIs1) {
    int value = bitIs1? 1 : 0;
    int mask = ~(1 << i);
    return (num & mask) | (value << i);
}