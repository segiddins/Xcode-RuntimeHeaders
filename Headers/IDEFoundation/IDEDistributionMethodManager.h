//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEDistributionMethodManager : NSObject
{
}

+ (id)defaultDistributionMethodManager;
- (id)orderedDistributionMethodsForTask:(long long)arg1 archive:(id)arg2;
- (id)orderedDistributionMethodsForTask:(long long)arg1 archive:(id)arg2 ignorePreflightChecks:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_passesPreflightChecksForArchive:(id)arg1 method:(id)arg2 error:(id *)arg3;
- (id)orderedDistributionMethods;

@end

