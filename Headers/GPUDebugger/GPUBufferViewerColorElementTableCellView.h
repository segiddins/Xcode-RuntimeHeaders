//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUBufferViewerDataElementTableCellView.h>

@class GPUBufferViewerColorView;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerColorElementTableCellView : GPUBufferViewerDataElementTableCellView
{
    GPUBufferViewerColorView *_colorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPUBufferViewerColorView *colorView; // @synthesize colorView=_colorView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setValue:(id)arg1 forComponent:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (id)initWithTableColumn:(id)arg1;

@end

