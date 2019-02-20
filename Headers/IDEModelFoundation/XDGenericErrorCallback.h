//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/XDErrorWarningCallback-Protocol.h>

@class NSDictionary, NSString;

@interface XDGenericErrorCallback : NSObject <XDErrorWarningCallback>
{
    NSDictionary *_compilerFlags;
    BOOL _success;
}

+ (id)stringForErrorCategory:(int)arg1;
- (void).cxx_destruct;
- (BOOL)didSucceed;
- (BOOL)shouldContinue;
- (id)currentRuntimeVersions;
- (id)currentDeploymentTargets;
- (id)compilerFlags;
- (id)descriptionForElement:(id)arg1;
- (void)createErrorsForDeploymentTargetFailures:(id)arg1 featureName:(id)arg2 category:(int)arg3 element:(id)arg4 documentURL:(id)arg5;
- (void)createErrorsForDocumentVersionRequirement:(id)arg1 featureName:(id)arg2 category:(int)arg3 element:(id)arg4 documentURL:(id)arg5;
- (void)createErrorsForToolsPlatformFailures:(id)arg1 featureName:(id)arg2 category:(int)arg3 element:(id)arg4 documentURL:(id)arg5;
- (void)createWarningForElement:(id)arg1 withFormat:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (id)initWithCompilerFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
