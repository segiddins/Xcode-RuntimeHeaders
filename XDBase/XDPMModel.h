//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDBase/XDModel.h>

@class NSMutableDictionary, NSString, NSUndoManager;
@protocol XDPMModelDelegate;

@interface XDPMModel : XDModel
{
    NSMutableDictionary *_fetchRequestsByName;
    NSMutableDictionary *_configurationsByName;
    BOOL _blockNotifications;
    NSUndoManager *_undoManager;
    id <XDPMModelDelegate> _delegate;
    NSString *_modelVersionIdentifier;
}

+ (id)arrayOfEntitiesPListsFromEntities:(id)arg1;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)undoManager;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)blockNotifications;
- (void)setBlockNotifications:(BOOL)arg1;
- (void)setModelVersionIdentifier:(id)arg1;
- (id)modelVersionIdentifier;
- (void)removeConfiguration:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (id)newConfigurationWithName:(id)arg1;
- (id)configurations;
- (id)configurationsByName;
- (void)removeFetchRequest:(id)arg1;
- (void)addFetchRequest:(id)arg1;
- (id)fetchRequestsByName;
- (id)entityForName:(id)arg1;
- (id)newEntityWithName:(id)arg1;
- (void)fillInPastedEntitiesWithUpdatedPList:(id)arg1;
- (id)pasteEmptyEntitiesFromPList:(id)arg1;
- (id)elementsRelatedToEntity:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
- (id)sortedEntities;
- (id)entities;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

