//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    double minX;
    double minY;
    double maxX;
    double maxY;
} CDStruct_c519178c;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        long long _field1;
        long long _field2;
    } _field1;
    long long _field2[2];
} CDUnion_42e99c75;

