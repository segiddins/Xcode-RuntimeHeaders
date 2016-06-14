//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEDebugTopNavigableModel-Protocol.h>

@class DVTStackBacktrace, IDEDebugSession, IDELaunchSession, NSString;

@interface IDEShellXPCProcess : NSObject <IDEDebugTopNavigableModel>
{
    NSString *_associatedProcessUUID;
    IDELaunchSession *launchSession;
    NSString *_name;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)contentDelegateUIExtensionIdentifier;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (id)initWithDebugSession:(id)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) IDEDebugSession *parentDebugSession;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

