//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTiPhoneSimulatorSession, NSDictionary;

@interface DYSimulatorSession : NSObject
{
    NSDictionary *_launchDictionary;
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didEndBlock;
    DTiPhoneSimulatorSession *_dtSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DTiPhoneSimulatorSession *dtSession; // @synthesize dtSession=_dtSession;
@property(copy, nonatomic) CDUnknownBlockType didEndBlock; // @synthesize didEndBlock=_didEndBlock;
@property(copy, nonatomic) CDUnknownBlockType didStartBlock; // @synthesize didStartBlock=_didStartBlock;
- (void)session:(id)arg1 didEndWithError:(id)arg2;
- (void)session:(id)arg1 didStart:(BOOL)arg2 withError:(id)arg3;
- (BOOL)launch:(id *)arg1;
- (void)_resetIvars;
- (void)invalidate;
- (id)initWithLaunchDictionary:(id)arg1;

@end

