//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunningApplication;

@interface IDEUITestingPermissionManager : NSObject
{
    int _availabilityToken;
    int _tccAllowedToken;
}

+ (id)sharedManager;
@property int tccAllowedToken; // @synthesize tccAllowedToken=_tccAllowedToken;
@property int availabilityToken; // @synthesize availabilityToken=_availabilityToken;
- (BOOL)setXcodeUITestingAgentAsResponsibleProcessForPID:(int)arg1 errorString:(id *)arg2;
- (id)_newInstanceOfXcodeHelper:(id *)arg1;
@property(readonly, copy) NSRunningApplication *runningApplicationForXcodeHelper;
- (id)_URLForXcodeHelper;
- (void)checkUITestingPermissionForXcodeUITestingAgentWithPrompt:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)shouldUseTCC;
- (BOOL)_checkPermissionsWithPrompt:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_waitForXcodeHelperToBeAvailable:(id *)arg1;
- (BOOL)_needToLaunchXcodeHelper;
- (void)dealloc;
- (id)init;

@end

