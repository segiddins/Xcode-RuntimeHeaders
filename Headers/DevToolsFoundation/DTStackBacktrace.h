//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DTStackBacktrace : NSObject
{
    NSArray *_returnAddresses;
    NSString *_stringRep;
}

+ (id)_callStackReturnAddressesExcludingTwoFrames;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (void).cxx_destruct;
- (id)_frameStringForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef)arg2 symbolPtr:(struct _CSTypeRef)arg3;
- (id)stringRepresentation;
- (id)initWithCallStackReturnAddresses:(id)arg1;
- (id)init;

@end

