//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUDebugNavigatorCellView.h>

@class GPUTraceCommandEncoderGroupItem, NSArray, NSMutableArray, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUDebugNavigatorEncoderCellView : GPUDebugNavigatorCellView
{
    NSArray *_images;
    NSMutableArray *_thumbnailViews;
    NSTextField *_messageView;
}

+ (double)heightForNavigator;
+ (double)bottomMargin;
+ (double)topMargin;
+ (struct CGSize)thumbnailSizeFromRowSizeStyle:(long long)arg1;
+ (id)identifier;
- (void).cxx_destruct;
- (void)layout;
- (void)prepareForReuse;
- (void)setImages:(id)arg1;
@property(retain) GPUTraceCommandEncoderGroupItem *objectValue; // @dynamic objectValue;
- (id)initWithFrame:(struct CGRect)arg1;

@end

