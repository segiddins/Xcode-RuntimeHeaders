//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface SKEMaterialPickerCollectionView : NSCollectionView
{
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    CDUnknownBlockType _doubleClickHandler;
}

@property(copy) CDUnknownBlockType doubleClickHandler; // @synthesize doubleClickHandler=_doubleClickHandler;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (id)thumbnailQueue;

@end

