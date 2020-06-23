//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTGeneratedContentProvider.h>

@class DVTObservingToken, NSString, NSURL;

@interface DBGDisassemblyGeneratedContentProvider : DVTGeneratedContentProvider
{
    NSURL *_url;
    DVTObservingToken *_currentStackFrameToken;
    DVTObservingToken *_currentStackFrameDisassemblyObservingToken;
    DVTObservingToken *_debugSessionCoalescedStateToken;
    DVTObservingToken *_settingPCDisassemblyObservingToken;
    NSString *_displayName;
    NSURL *_temporaryFileURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *temporaryFileURL; // @synthesize temporaryFileURL=_temporaryFileURL;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void)primitiveInvalidate;
- (void)_closeDocument;
- (void)_getDisassemblyForSettingPC:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_createDebugSessionStateObserver:(id)arg1;
- (void)_createObserversForReloading:(id)arg1;
- (void)generateContentForURL:(id)arg1 waitingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

