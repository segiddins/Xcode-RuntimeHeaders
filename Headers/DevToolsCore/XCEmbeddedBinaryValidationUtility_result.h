//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCEmbeddedBinaryValidationUtility_result : NSObject
{
    int _exitCode;
    NSString *_error;
    NSString *_warning;
}

+ (id)resultWithWarning:(id)arg1;
+ (id)resultWithError:(id)arg1;
+ (id)success;
- (void).cxx_destruct;
@property(copy) NSString *warning; // @synthesize warning=_warning;
@property(copy) NSString *error; // @synthesize error=_error;
@property int exitCode; // @synthesize exitCode=_exitCode;
- (id)initWithExitCode:(int)arg1 error:(id)arg2 warning:(id)arg3;

@end
