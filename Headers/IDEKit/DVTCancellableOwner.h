//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DVTCancellableOwner : NSObject
{
    NSMutableArray *_objects;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAndClear;
- (void)addObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)init;

@end

