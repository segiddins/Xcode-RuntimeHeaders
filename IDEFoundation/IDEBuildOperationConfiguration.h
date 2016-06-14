//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEActivityLogSection, IDEBuildParameters, IDEExecutionEnvironment, IDEScheme, NSArray;

@interface IDEBuildOperationConfiguration : NSObject
{
    BOOL _parallelizeBuildables;
    BOOL _dontActuallyRunCommands;
    BOOL _buildImplicitDependencies;
    BOOL _restorePersistedBuildResults;
    int _buildCommand;
    IDEBuildParameters *_buildParameters;
    IDEExecutionEnvironment *_executionEnvironment;
    DVTFilePath *_singleFileToBuild;
    IDEActivityLogSection *_buildLog;
    NSArray *_buildables;
    IDEScheme *_scheme;
}

@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSArray *buildables; // @synthesize buildables=_buildables;
@property(nonatomic) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(nonatomic) BOOL buildImplicitDependencies; // @synthesize buildImplicitDependencies=_buildImplicitDependencies;
@property(nonatomic) BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(nonatomic) BOOL parallelizeBuildables; // @synthesize parallelizeBuildables=_parallelizeBuildables;
@property(retain, nonatomic) IDEActivityLogSection *buildLog; // @synthesize buildLog=_buildLog;
@property(retain, nonatomic) DVTFilePath *singleFileToBuild; // @synthesize singleFileToBuild=_singleFileToBuild;
@property(retain, nonatomic) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(retain, nonatomic) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(nonatomic) int buildCommand; // @synthesize buildCommand=_buildCommand;
- (void).cxx_destruct;
- (id)initWithBuildCommand:(int)arg1 buildParameters:(id)arg2 executionEnvironment:(id)arg3 singleFileToBuild:(id)arg4 buildLog:(id)arg5 parallelizeBuildables:(BOOL)arg6 dontActuallyRunCommands:(BOOL)arg7 buildImplicitDependencies:(BOOL)arg8 restorePersistedBuildResults:(BOOL)arg9;

@end

