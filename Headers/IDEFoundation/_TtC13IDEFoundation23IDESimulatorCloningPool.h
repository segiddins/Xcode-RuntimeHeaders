//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDERunDestination, MISSING_TYPE;

@interface _TtC13IDEFoundation23IDESimulatorCloningPool : NSObject
{
    MISSING_TYPE *canonicalRunDestination;
    MISSING_TYPE *sharedClonePool;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL canVendMoreThanOneDevice;
- (void)deallocateDevice:(id)arg1;
- (id)allocateDevice;
- (id)initWithTemplateSimulator:(id)arg1 sharedClonePool:(id)arg2;
- (id)initWithTemplateSimulator:(id)arg1;
@property(nonatomic, readonly) IDERunDestination *canonicalRunDestination; // @synthesize canonicalRunDestination;

@end

