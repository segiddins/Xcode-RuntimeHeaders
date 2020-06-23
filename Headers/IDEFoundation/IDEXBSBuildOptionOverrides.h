//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEXBSBuildOptionOverrides : NSObject
{
    NSString *_xbsProjectName;
    NSString *_workspaceName;
    NSString *_configurationName;
    NSString *_schemeName;
    NSString *_targetName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(readonly, nonatomic) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(readonly, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, nonatomic) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(readonly, nonatomic) NSString *xbsProjectName; // @synthesize xbsProjectName=_xbsProjectName;
- (id)initWithXBSProjectNamed:(id)arg1 workspaceNamed:(id)arg2 configurationNamed:(id)arg3 schemeNamed:(id)arg4 targetNamed:(id)arg5;

@end
