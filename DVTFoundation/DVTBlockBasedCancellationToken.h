//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTBlockBasedCancellationToken : NSObject <DVTCancellable>
{
    CDUnknownBlockType _block;
    DVTStackBacktrace *_creationBacktrace;
    BOOL _mustCancel;
    unsigned char _cancelled;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (id)initWithMustCancel:(BOOL)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

