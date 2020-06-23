//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct IBNSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark Typedef'd Structures

typedef struct {
    double minX;
    double minY;
    double maxX;
    double maxY;
} CDStruct_c519178c;

typedef struct {
    struct {
        struct CGRect _field1;
        char _field2;
    } _field1[3][3];
} CDStruct_b58c4854;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        long long _field1;
        long long _field2;
    } _field1;
    long long _field2[2];
} CDUnion_42e99c75;

