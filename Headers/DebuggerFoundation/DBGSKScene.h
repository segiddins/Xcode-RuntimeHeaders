//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGSKNodeSurface.h>

@interface DBGSKScene : DBGSKNodeSurface
{
    long long _scaleMode;
    struct CGSize _skSceneSize;
}

@property struct CGSize skSceneSize; // @synthesize skSceneSize=_skSceneSize;
@property long long scaleMode; // @synthesize scaleMode=_scaleMode;
- (id)cameraNode;
- (void)_updatePropertiesWithSnapshotNode:(id)arg1 forRequest:(id)arg2;

@end

