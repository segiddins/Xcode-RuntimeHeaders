//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTObservingToken, DVTStackBacktrace, IDEPlaygroundCommonSharedContext, NSDate, NSSet, NSString;

@interface IDEPlaygroundResourcesMonitor : NSObject <DVTInvalidation>
{
    IDEPlaygroundCommonSharedContext *_context;
    IDEPlaygroundResourcesMonitor *_dependency;
    NSDate *_lastModificationDate;
    NSSet *_resourcesDirectoryResourceFiles;
    DVTFilePath *__monitoredResourcesDirectory;
    DVTObservingToken *__resourcesDirectoryObserverToken;
    DVTObservingToken *__dependencyModificationObserverToken;
}

+ (void)initialize;
@property(retain, nonatomic) DVTObservingToken *_dependencyModificationObserverToken; // @synthesize _dependencyModificationObserverToken=__dependencyModificationObserverToken;
@property(retain, nonatomic) DVTObservingToken *_resourcesDirectoryObserverToken; // @synthesize _resourcesDirectoryObserverToken=__resourcesDirectoryObserverToken;
@property(retain, nonatomic, setter=_setMonitoredResourcesDirectory:) DVTFilePath *_monitoredResourcesDirectory; // @synthesize _monitoredResourcesDirectory=__monitoredResourcesDirectory;
@property(copy, nonatomic) NSSet *resourcesDirectoryResourceFiles; // @synthesize resourcesDirectoryResourceFiles=_resourcesDirectoryResourceFiles;
@property(retain, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly) __weak IDEPlaygroundResourcesMonitor *dependency; // @synthesize dependency=_dependency;
@property(readonly, nonatomic) IDEPlaygroundCommonSharedContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_generateResourcesDirectoryResourceFilePaths;
- (void)primitiveInvalidate;
- (id)initWithPlaygroundContext:(id)arg1 dependency:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

