//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError;

@interface _TtC12IDEDocViewer26IDEAllDocsExplorableSource : NSObject
{
    MISSING_TYPE *synchronizationQueue;
    MISSING_TYPE *rootIdentifier;
    MISSING_TYPE *broadcaster;
    MISSING_TYPE *index;
    MISSING_TYPE *availabilityIndex;
    MISSING_TYPE *displayTreeItems;
    MISSING_TYPE *parentIdentifiers;
    MISSING_TYPE *childIdentifiers;
    MISSING_TYPE *identifiedAllCollections;
    MISSING_TYPE *collectionNameToCollectionIdentifier;
    MISSING_TYPE *collectionIdentifierToCollectionIndex;
    MISSING_TYPE *startedLoading;
    MISSING_TYPE *loadingError;
    MISSING_TYPE *initialLoadingTimeLimit;
    MISSING_TYPE *backgroundLoadingTimeLimit;
    MISSING_TYPE *identifiersQueriedUnsuccessfullyDuringIndexLoading;
    MISSING_TYPE *finishedLoading;
}

+ (id)makeJumpBarController;
+ (id)sharedSource;
- (void).cxx_destruct;
- (id)init;
- (id)urlFor:(id)arg1;
- (id)anyIdentifierFor:(id)arg1;
@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading;
@property(nonatomic, copy) NSError *loadingError;

@end
