//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger40GPULandingPageTimelineCollectionViewItem : NSCollectionViewItem
{
    MISSING_TYPE *thumbnailLayers;
    MISSING_TYPE *encoderLabelLayer;
    MISSING_TYPE *drawCallsLabelLayer;
    MISSING_TYPE *thumbnails;
    MISSING_TYPE *curThumbnails;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewFrameDidChangeWithNotification:(id)arg1;
- (void)dealloc;
@property(nonatomic, copy) id representedObject;
- (void)loadView;
- (void)viewDidLoad;

@end

