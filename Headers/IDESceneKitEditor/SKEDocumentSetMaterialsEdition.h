//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class NSArray, SCNGeometry;

@interface SKEDocumentSetMaterialsEdition : SKEDocumentEdition
{
    SCNGeometry *_geometry;
    NSArray *_newMaterials;
    NSArray *_oldMaterials;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 materials:(id)arg2 geometry:(id)arg3;

@end

