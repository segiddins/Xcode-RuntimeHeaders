//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelFoundation/XDGenericErrorCallback.h>

@protocol IDECodeGeneratorOutputDelegate;

@interface XDPersistenceErrorCallback : XDGenericErrorCallback
{
    id <IDECodeGeneratorOutputDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <IDECodeGeneratorOutputDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)_emitBuildLogOutputForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 isError:(BOOL)arg4 documentURL:(id)arg5;

@end

