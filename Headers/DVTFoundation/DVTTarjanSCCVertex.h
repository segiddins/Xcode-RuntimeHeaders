//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTTarjanSCCVertex : NSObject
{
    unsigned long long index;
    unsigned long long lowlink;
    BOOL inStack;
    id userObject;
}

- (void).cxx_destruct;
- (id)initWithUserObject:(id)arg1;

@end

