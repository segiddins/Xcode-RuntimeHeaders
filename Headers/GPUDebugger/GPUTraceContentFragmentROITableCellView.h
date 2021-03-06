//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUTraceShaderDebuggerThreadPickerItem, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUTraceContentFragmentROITableCellView : NSTableCellView
{
    NSTextField *_xView;
    NSTextField *_yView;
    NSTextField *_zView;
    NSImageView *_fragmentImageView;
}

+ (double)height;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property __weak NSImageView *fragmentImageView; // @synthesize fragmentImageView=_fragmentImageView;
@property __weak NSTextField *zView; // @synthesize zView=_zView;
@property __weak NSTextField *yView; // @synthesize yView=_yView;
@property __weak NSTextField *xView; // @synthesize xView=_xView;
@property(retain) GPUTraceShaderDebuggerThreadPickerItem *objectValue; // @dynamic objectValue;

@end

