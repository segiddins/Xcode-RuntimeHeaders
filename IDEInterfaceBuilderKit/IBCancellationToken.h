//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTCancellable-Protocol.h>

@class NSString;

@interface IBCancellationToken : NSObject <DVTCancellable>
{
    CDUnknownBlockType cancellationBlock;
}

+ (id)tokenWithCancellable:(id)arg1;
+ (id)aggregatedCancelationToken:(id)arg1;
- (void).cxx_destruct;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (id)initWithOptionalCancellationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

