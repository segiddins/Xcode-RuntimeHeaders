//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC13IDEFoundation21IDEBuildableReference;

@interface IDELaunchTestSchemeActionOptions : NSObject
{
    MISSING_TYPE *parentOptions;
    MISSING_TYPE *overrides;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL isNSZombieEnabled;
@property(nonatomic, readonly) BOOL isGuardMallocEnabled;
@property(nonatomic, readonly) BOOL isMallocGuardEdgesEnabled;
@property(nonatomic, readonly) BOOL isMallocScribbleEnabled;
@property(nonatomic, readonly) NSString *region;
@property(nonatomic, readonly) NSString *language;
@property(nonatomic, readonly) BOOL isMainThreadCheckerEnabled;
@property(nonatomic, readonly) BOOL isUndefinedBehaviorSanitizerEnabled;
@property(nonatomic, readonly) BOOL isThreadSanitizerEnabled;
@property(nonatomic, readonly) _TtC13IDEFoundation21IDEBuildableReference *buildableReferenceForMacroExpansion;
@property(nonatomic, readonly) NSArray *environmentVariableEntries;
@property(nonatomic, readonly) NSArray *commandLineArgumentEntries;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;

@end
