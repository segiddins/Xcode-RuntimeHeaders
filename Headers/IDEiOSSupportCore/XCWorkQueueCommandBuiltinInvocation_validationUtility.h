//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCWorkQueueCommandBuiltinInvocation.h>

@class NSString;

@interface XCWorkQueueCommandBuiltinInvocation_validationUtility : XCWorkQueueCommandBuiltinInvocation
{
    _Bool _archive;
    _Bool _verbose;
    _Bool _storeIssuesAreWarnings;
    _Bool _storeValidation;
    NSString *_application;
}

- (void).cxx_destruct;
@property(retain) NSString *application; // @synthesize application=_application;
@property _Bool storeValidation; // @synthesize storeValidation=_storeValidation;
@property _Bool storeIssuesAreWarnings; // @synthesize storeIssuesAreWarnings=_storeIssuesAreWarnings;
@property _Bool verbose; // @synthesize verbose=_verbose;
@property _Bool archive; // @synthesize archive=_archive;
- (BOOL)validateMedusaSupportWithInfoDictionary:(id)arg1 errors:(id *)arg2;
- (int)runTaskWithArguments:(id)arg1 environment:(id)arg2 workingDirectoryPath:(id)arg3 infd:(int)arg4 outerrfd:(int)arg5;

@end

