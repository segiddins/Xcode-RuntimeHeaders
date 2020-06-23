//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUBufferViewerTextField;
@protocol GPUBufferViewerElement;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerTypeOutlineCellView : NSTableCellView
{
    id <GPUBufferViewerElement> _element;
    GPUBufferViewerTextField *_nameView;
}

+ (id)sharedIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) GPUBufferViewerTextField *nameView; // @synthesize nameView=_nameView;
@property(nonatomic) __weak id <GPUBufferViewerElement> element; // @synthesize element=_element;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)init;

@end

