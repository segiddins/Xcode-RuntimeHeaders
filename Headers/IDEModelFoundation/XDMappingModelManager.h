//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSUndoManager, XDDevMappingModel;

@interface XDMappingModelManager : NSObject
{
    NSString *_modelFilePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    XDDevMappingModel *_mappingModelInstance;
    NSUndoManager *_undoManager;
    NSPersistentStore *_store;
}

- (void).cxx_destruct;
- (id)newModelObjectOfClass:(Class)arg1;
@property(readonly) NSString *modelFilePath;
- (id)mappingModelInstance;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (BOOL)saveContextToPath:(id)arg1 error:(id *)arg2;
- (void)updatePersistentStoreCoordinator:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)initWithFilePath:(id)arg1 undoManager:(id)arg2;
- (id)storeURLWithModelPath:(id)arg1;

@end

