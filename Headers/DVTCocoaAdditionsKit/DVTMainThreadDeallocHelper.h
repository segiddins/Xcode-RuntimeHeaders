//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTMainThreadDeallocHelper : NSObject
{
    int _rc;
    NSObject *_representedObject;
}

- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (id)initWithRepresentedObject:(id)arg1;

@end

