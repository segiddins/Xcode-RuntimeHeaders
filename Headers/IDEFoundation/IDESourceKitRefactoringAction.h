//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDESourceKitRefactoringActionDelegate-Protocol.h>

@class IDESourceKitWorkspace, NSString;
@protocol IDESourceKitRefactoringDelegate;

@interface IDESourceKitRefactoringAction : NSObject <IDESourceKitRefactoringActionDelegate>
{
    id <IDESourceKitRefactoringDelegate> _delegate;
    long long _token;
    long long _indexerToken;
    IDESourceKitWorkspace *_workspace;
    long long _state;
    NSString *_failureReason;
}

+ (BOOL)getRemappedFiles:(id)arg1 callback:(CDUnknownBlockType)arg2 error:(id *)arg3;
@property(readonly) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)refactoringUnhandledURLs:(id)arg1;
- (void)refactoringProgressUpdated:(id)arg1;
- (void)refactoringRenameRangesFound:(id)arg1;
- (void)refactoringStateChanged:(id)arg1;
- (long long)refactoringStateForUID:(struct _sourcekit_uid_s *)arg1;
- (long long)refactoringActionToken;
- (long long)indexerToken;
- (BOOL)cancel:(id *)arg1;
- (void)dealloc;
- (id)initWithToken:(long long)arg1 indexerToken:(long long)arg2 delegate:(id)arg3 workspace:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

