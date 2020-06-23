//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/DVTTextFindable-Protocol.h>
#import <GPUDebugger/NSObject-Protocol.h>

@class NSString;
@protocol NSObject><DVTTextFindable;

__attribute__((visibility("hidden")))
@interface GPUTextFindableProxy : NSObject <NSObject, DVTTextFindable>
{
    id <NSObject><DVTTextFindable> _findable;
}

- (void).cxx_destruct;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)initWithFindable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end
