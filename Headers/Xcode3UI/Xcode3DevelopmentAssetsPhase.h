//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhase.h>

@class Xcode3DevelopmentAssetsGroup;

@interface Xcode3DevelopmentAssetsPhase : Xcode3BuildPhase
{
    Xcode3DevelopmentAssetsGroup *_developmentAssetsGroup;
}

+ (id)developmentAssetsBuildPhaseForTarget:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) Xcode3DevelopmentAssetsGroup *developmentAssetsGroup; // @synthesize developmentAssetsGroup=_developmentAssetsGroup;
- (BOOL)containsItemIdenticalTo:(id)arg1;
- (id)fileTypeForDisplay;
- (BOOL)acceptsItem:(id)arg1 checkFileType:(BOOL)arg2;
- (BOOL)acceptsItem:(id)arg1;
- (id)pbxBuildFiles;
- (id)name;
- (BOOL)canMove;
- (BOOL)canDelete;
- (BOOL)canRename;
- (id)pbxBuildPhase;
- (id)gid;
- (id)initWithRepresentedObject:(id)arg1 target:(id)arg2;

@end

