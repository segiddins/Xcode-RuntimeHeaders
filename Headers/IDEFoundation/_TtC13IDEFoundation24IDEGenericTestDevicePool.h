//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDERunDestination, MISSING_TYPE;

@interface _TtC13IDEFoundation24IDEGenericTestDevicePool : NSObject
{
    MISSING_TYPE *queue;
    MISSING_TYPE *devices;
    MISSING_TYPE *requests;
    MISSING_TYPE *canonicalRunDestination;
    MISSING_TYPE *canVendMoreThanOneDevice;
}

- (void).cxx_destruct;
- (id)init;
- (void)deallocateDevice:(id)arg1;
- (id)allocateDevice;
- (id)initWithRunDestination:(id)arg1;
- (id)initWithCanonicalRunDestination:(id)arg1 devices:(id)arg2;
@property(nonatomic) BOOL canVendMoreThanOneDevice; // @synthesize canVendMoreThanOneDevice;
@property(nonatomic, readonly) IDERunDestination *canonicalRunDestination; // @synthesize canonicalRunDestination;

@end
