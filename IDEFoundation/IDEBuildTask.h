//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class IDEActivityLogSection, NSDictionary, NSString;
@protocol IDEBuildTaskCallbacks;

@interface IDEBuildTask : DVTOperation
{
    NSString *_identifier;
    NSDictionary *_properties;
    IDEActivityLogSection *_activityLogSection;
    BOOL _restorePersistedBuildResults;
    BOOL _dontActuallyRun;
    int _exitCode;
    id <IDEBuildTaskCallbacks> _callbackDelegate;
}

+ (id)defaultProperties;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;
+ (void)initialize;
@property __weak id <IDEBuildTaskCallbacks> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
@property BOOL dontActuallyRun; // @synthesize dontActuallyRun=_dontActuallyRun;
@property(nonatomic) int exitCode; // @synthesize exitCode=_exitCode;
@property(retain, nonatomic) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(readonly) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)longDescription;
- (id)description;
- (void)main;
- (void)addStatisticsDataToStatisticsSection:(id)arg1;
- (BOOL)isWrapperForCommand:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;

@end

