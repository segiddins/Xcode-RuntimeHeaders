//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDESpriteKitParticleEditor/IDEDebuggingAdditionUIController-Protocol.h>

@class DVTExtension, DVTStackBacktrace, NSString;

@interface SKDebuggingAdditionUIController : NSObject <IDEDebuggingAdditionUIController>
{
    DVTExtension *_extension;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)extension;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

