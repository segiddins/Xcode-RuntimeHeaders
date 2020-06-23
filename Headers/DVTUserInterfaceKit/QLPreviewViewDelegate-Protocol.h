//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/NSObject-Protocol.h>

@class NSArray, NSPasteboard, NSView, QLPreviewView;
@protocol NSDraggingInfo, NSPasteboardWriting, QLPreviewCustomView, QLPreviewItem;

@protocol QLPreviewViewDelegate <NSObject>

@optional
- (BOOL)previewView:(QLPreviewView *)arg1 canShowPathForItem:(id <QLPreviewItem>)arg2;
- (unsigned long long)previewView:(QLPreviewView *)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (NSArray *)previewView:(QLPreviewView *)arg1 draggingItemsForPreviewItem:(id <QLPreviewItem>)arg2;
- (id <NSPasteboardWriting>)previewView:(QLPreviewView *)arg1 pasteboardWriterForPreviewItem:(id <QLPreviewItem>)arg2;
- (BOOL)previewView:(QLPreviewView *)arg1 writePreviewItem:(id <QLPreviewItem>)arg2 toPasteboard:(NSPasteboard *)arg3;
- (BOOL)previewView:(QLPreviewView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 onPreviewItem:(id <QLPreviewItem>)arg3;
- (unsigned long long)previewView:(QLPreviewView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 onPreviewItem:(id <QLPreviewItem>)arg3;
- (NSView<QLPreviewCustomView> *)previewView:(QLPreviewView *)arg1 customViewForPreviewItem:(id <QLPreviewItem>)arg2;
- (BOOL)previewView:(QLPreviewView *)arg1 shouldPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 timedOutLoadingPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 didShowPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 willShowPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 didLoadPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 willLoadPreviewItem:(id <QLPreviewItem>)arg2;
@end

