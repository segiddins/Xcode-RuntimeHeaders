//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DevkitConstant : NSObject
{
    int type;
    long long value;
}

+ (id)charConstant:(const char *)arg1;
+ (id)intConstant:(const char *)arg1;
+ (id)int:(long long)arg1;
+ (id)type:(int)arg1 int:(long long)arg2;
- (BOOL)isUnsigned;
- (id)type:(int)arg1;
- (int)type;
- (long long)int;
- (id)int:(long long)arg1;

@end

