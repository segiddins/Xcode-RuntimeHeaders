//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SourceEditor/PGERunDelegateWrapper-Protocol.h>

@class NSString;

@interface PGERunDelegateWrapper : NSObject <PGERunDelegateWrapper>
{
    struct __CTRunDelegate *_runDelegateRef;
}

@property struct __CTRunDelegate *runDelegateRef; // @synthesize runDelegateRef=_runDelegateRef;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

