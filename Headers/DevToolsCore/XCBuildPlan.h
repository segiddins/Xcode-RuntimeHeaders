//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBuildPlan.h>

@interface XCBuildPlan : IDEBuildPlan
{
}

- (id)_naturalPathForPath:(id)arg1 basePath:(id)arg2;
- (void)_writeEscapedString:(id)arg1 toFileHandle:(struct __sFILE *)arg2;
- (id)_buildSettingReplacementsForCommand:(id)arg1;
- (void)_writeQuicklooksRepresentationToFileAtPath:(id)arg1 basePath:(id)arg2;
- (void)_writeDebugRepresentationToFileAtPath:(id)arg1;
- (void)writeDebugRepresentationToFileAtPath:(id)arg1 format:(long long)arg2 basePath:(id)arg3;

@end

