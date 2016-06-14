//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray;

@interface XDDevMappingModel : NSManagedObject
{
    NSArray *_defaultEntityMappingTypeNames;
}

- (void)moveEntityMappings:(id)arg1 toPosition:(long long)arg2;
- (BOOL)renumberEntityMappings;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (void)updateDestinationModelWithModel:(id)arg1;
- (void)updateSourceModelWithModel:(id)arg1;
- (void)generateDefaultMappings;
- (id)sortedEntityMappingsByName;
- (id)sortedEntityMappings;
- (id)defaultEntityMappingUIStrings;
- (void)removeEntityMappingsObject:(id)arg1;
- (void)addEntityMappingsObject:(id)arg1;
- (id)errorIconData;
- (void)setDestinationModelPath:(id)arg1;
- (id)destinationModelPath;
- (void)setSourceModelData:(id)arg1;
- (id)sourceModelData;
- (void)setSourceModelPath:(id)arg1;
- (id)sourceModelPath;
- (void)setDestinationModelData:(id)arg1;
- (id)destinationModelData;
- (void)setSourceModel:(id)arg1;
- (id)sourceModel;
- (void)setDestinationModel:(id)arg1;
- (id)destinationModel;
- (void)dealloc;

@end

