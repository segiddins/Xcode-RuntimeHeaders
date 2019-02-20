//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXProjectItem.h>

@class NSMutableArray, PBXContainer, PBXFileReference, PBXGroup;

@interface XCProjectReferenceInfo : PBXProjectItem
{
    PBXFileReference *_projectReference;
    PBXContainer *_container;
    NSMutableArray *_targetProxies;
    PBXGroup *_productsGroup;
    BOOL _needsSync;
    BOOL _createdByUpgrading;
}

+ (id)archivableRelationships;
- (long long)compareName:(id)arg1;
- (id)description;
- (BOOL)createdByUpgrading;
- (id)archivableInfoDictionary;
- (id)initWithProjectReferenceInfoDictionary:(id)arg1;
- (void)_unarchiverDidFinishUnarchiving:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)writeToPListArchiver:(id)arg1;
- (void)willBeDeleted;
- (id)products;
- (id)targets;
- (id)projectReference;
- (void)_synchronizeWithReferencedProjectIfNeeded;
- (void)_removeProductReferenceProxy:(id)arg1;
- (void)_removeTargetProxy:(id)arg1;
- (BOOL)needsSync;
- (void)setNeedsSync:(BOOL)arg1;
- (void)_needsSyncDueToNotification:(id)arg1;
- (void)_activeConfigurationNameDidChange:(id)arg1;
- (void)_startObservingNotifications;
- (id)container;
- (void)setContainer:(id)arg1;
- (void)dealloc;
- (id)initWithProjectReference:(id)arg1;

@end
