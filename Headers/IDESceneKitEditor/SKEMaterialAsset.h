//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESceneKitEditor/NSCoding-Protocol.h>

@class NSDate, NSImage, SCNMaterial;

@interface SKEMaterialAsset : NSObject <NSCoding>
{
    NSImage *_preview;
    SCNMaterial *_material;
    NSDate *_lastUpdate;
}

- (void).cxx_destruct;
@property(readonly) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly) SCNMaterial *material; // @synthesize material=_material;
- (id)previewForItem:(id)arg1;
- (id)computePreview;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMaterial:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

