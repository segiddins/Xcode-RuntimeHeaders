//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBox.h"

@class GPUTraceResourceCollectionViewItem;

__attribute__((visibility("hidden")))
@interface GPUResourceThumbnailBox : NSBox
{
    GPUTraceResourceCollectionViewItem *_collectionViewItem;
}

@property(nonatomic) __weak GPUTraceResourceCollectionViewItem *collectionViewItem; // @synthesize collectionViewItem=_collectionViewItem;
- (void).cxx_destruct;
- (void)viewDidChangeBackingProperties;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;

@end

