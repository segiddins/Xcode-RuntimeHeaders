//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/DVTTextFindable-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, SKDocument;

@protocol SKEditingTarget <DVTTextFindable>
@property(readonly, nonatomic) NSMutableArray *dynamicObjectLibraryAssets;
@property(readonly, nonatomic) NSMutableArray *staticObjectLibraryAssets;
@property(readonly, nonatomic) NSString *objectsLibraryCustomGroupIdentifier;
@property(readonly, nonatomic) NSString *objectsLibraryTitle;
@property(readonly, nonatomic) NSArray *topLevelStructuredObject;
@property(nonatomic) BOOL paused;
@property(nonatomic) __weak SKDocument *document;
- (BOOL)writeToURL:(NSURL *)arg1 ofType:(NSString *)arg2 error:(id *)arg3;
- (BOOL)isTargetForObject:(id)arg1;

@optional
- (void)prepareTargetForDocumentClose;
@end
