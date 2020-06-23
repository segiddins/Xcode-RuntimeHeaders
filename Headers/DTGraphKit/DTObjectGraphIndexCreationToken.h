//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTGraphKit/DVTCancellable-Protocol.h>

@class NSString;

@interface DTObjectGraphIndexCreationToken : NSObject <DVTCancellable>
{
    BOOL _cancelled;
}

@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

