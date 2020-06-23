//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEMediaRepository, IDEMediaResourceFoldingStrategy, IDEMediaType, NSArray, NSMutableSet, NSSet, NSString;

@interface IDEMediaResourceVariantSet : NSObject
{
    NSMutableSet *_resources;
    IDEMediaType *_mediaType;
    IDEMediaRepository *_repository;
    NSString *_name;
    IDEMediaResourceFoldingStrategy *_foldingStrategy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDEMediaResourceFoldingStrategy *foldingStrategy; // @synthesize foldingStrategy=_foldingStrategy;
@property(readonly, nonatomic) NSSet *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) IDEMediaRepository *repository; // @synthesize repository=_repository;
@property(readonly) IDEMediaType *mediaType; // @synthesize mediaType=_mediaType;
- (void)populateAdditionalTypesToPasteboard:(id)arg1;
- (void)removeAllResources;
- (void)removeResource:(id)arg1;
- (void)addResource:(id)arg1;
@property(readonly, nonatomic) NSArray *orderedResourcesFromLeastToMostSpecific;
@property(readonly, nonatomic) NSSet *variants;
- (id)firstResourceThatExactlyMatchesVariant:(id)arg1;
- (id)firstResourceMatchingVariant:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfResources;
- (BOOL)containsResource:(id)arg1;
- (id)description;
- (id)initWithRepository:(id)arg1 mediaType:(id)arg2 name:(id)arg3 andFoldingStrategy:(id)arg4;

@end

