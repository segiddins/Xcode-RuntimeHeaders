//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICCatalogMutator : NSObject
{
}

+ (void)applyMutatorsToModelOutsideOfDocumentContext:(id)arg1;
+ (id)fileManager;
+ (Class)fileManagerClass;
+ (void)setFileManagerClass:(Class)arg1;
+ (void)initialize;
- (id)updateDiskMutationResult:(id)arg1 byUpdatingManifestData:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (BOOL)isNoOp;
@property(readonly) NSString *mutationDescription;
- (id)inverseMutator;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyToModel;
- (id)fileManager;

@end

