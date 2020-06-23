//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class IDEOverridingBuildProperties, IDERunDestination, IDESchemeCommand, IDEWorkspaceArenaSnapshot, IDEXBSBuildParameters, NSString;
@protocol IDEPrimitiveSchemeCommand;

@interface IDEBuildParameters : NSObject <NSCopying>
{
    IDEWorkspaceArenaSnapshot *_workspaceArenaSnapshot;
    NSString *_buildAction;
    IDESchemeCommand<IDEPrimitiveSchemeCommand> *_schemeCommand;
    NSString *_configurationName;
    IDERunDestination *_activeRunDestination;
    NSString *_activeArchitecture;
    IDEOverridingBuildProperties *_overridingProperties;
    IDEXBSBuildParameters *_xbsBuildParameters;
    unsigned long long _hash;
    BOOL _collectBuildTimeStatistics;
    BOOL _collectTimelineMetrics;
}

+ (void)registerDefaultXcconfigCommandLineOverridingProperties:(id)arg1;
- (void).cxx_destruct;
@property(readonly) BOOL collectTimelineMetrics; // @synthesize collectTimelineMetrics=_collectTimelineMetrics;
@property(readonly) BOOL collectBuildTimeStatistics; // @synthesize collectBuildTimeStatistics=_collectBuildTimeStatistics;
@property(readonly) IDEXBSBuildParameters *xbsBuildParameters; // @synthesize xbsBuildParameters=_xbsBuildParameters;
@property(readonly, copy) IDEOverridingBuildProperties *overridingProperties; // @synthesize overridingProperties=_overridingProperties;
@property(readonly, copy) NSString *activeArchitecture; // @synthesize activeArchitecture=_activeArchitecture;
@property(readonly) IDERunDestination *activeRunDestination; // @synthesize activeRunDestination=_activeRunDestination;
@property(readonly, copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly, copy) NSString *buildAction; // @synthesize buildAction=_buildAction;
@property(readonly, copy) IDEWorkspaceArenaSnapshot *workspaceArenaSnapshot; // @synthesize workspaceArenaSnapshot=_workspaceArenaSnapshot;
- (id)dvt_detailedDebugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithOverridingProperties:(id)arg1;
- (id)copyWithConfigurationName:(id)arg1;
- (id)copyWithAction:(id)arg1;
- (id)initForBuildWithWorkspaceArenaSnapshot:(id)arg1 configurationName:(id)arg2;
- (id)initForBuildWithConfigurationName:(id)arg1;
- (id)initForBuildWithWorkspaceArenaSnapshot:(id)arg1 schemeCommand:(id)arg2 configurationName:(id)arg3 activeRunDestination:(id)arg4 activeArchitecture:(id)arg5 overridingProperties:(id)arg6;
- (id)initForBuildWithWorkspaceArenaSnapshot:(id)arg1 schemeCommand:(id)arg2 configurationName:(id)arg3 activeRunDestination:(id)arg4 activeArchitecture:(id)arg5 overridingProperties:(id)arg6 collectBuildTimeStatistics:(BOOL)arg7;
- (id)initForAction:(id)arg1 workspaceArenaSnapshot:(id)arg2 schemeCommand:(id)arg3 configurationName:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6 overridingProperties:(id)arg7;
- (id)initForAction:(id)arg1 workspaceArenaSnapshot:(id)arg2 schemeCommand:(id)arg3 configurationName:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6 overridingProperties:(id)arg7 collectBuildTimeStatistics:(BOOL)arg8 collectTimelineMetrics:(BOOL)arg9;
- (id)initForAction:(id)arg1 workspaceArenaSnapshot:(id)arg2 schemeCommand:(id)arg3 configurationName:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6 overridingProperties:(id)arg7 collectBuildTimeStatistics:(BOOL)arg8;
- (id)initForAction:(id)arg1 workspaceArenaSnapshot:(id)arg2 schemeCommand:(id)arg3 configurationName:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6 overridingProperties:(id)arg7 xbsParameters:(id)arg8;
- (id)initForAction:(id)arg1 workspaceArenaSnapshot:(id)arg2 schemeCommand:(id)arg3 configurationName:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6 overridingProperties:(id)arg7 xbsParameters:(id)arg8 collectBuildTimeStatistics:(BOOL)arg9 collectTimelineMetrics:(BOOL)arg10;
- (id)initForAction:(id)arg1 workspaceArenaSnapshot:(id)arg2 schemeCommand:(id)arg3 configurationName:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6 overridingProperties:(id)arg7 xbsParameters:(id)arg8 collectBuildTimeStatistics:(BOOL)arg9;
- (id)init;

@end

