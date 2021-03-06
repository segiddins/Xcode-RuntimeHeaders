//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUBufferViewerErrorView, NSArray;
@protocol GPUBufferViewerElement;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerElementOutlineCellView : NSTableCellView
{
    id <GPUBufferViewerElement> _element;
    NSArray *_dataViews;
    GPUBufferViewerErrorView *_errorView;
    unsigned long long _rows;
    unsigned long long _components;
}

+ (id)identifierForElement:(id)arg1 maxComponents:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long components; // @synthesize components=_components;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(retain, nonatomic) GPUBufferViewerErrorView *errorView; // @synthesize errorView=_errorView;
@property(copy, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(nonatomic) __weak id <GPUBufferViewerElement> element; // @synthesize element=_element;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setError:(id)arg1;
- (void)resetValues;
- (void)setValue:(id)arg1 forComponent:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithElement:(id)arg1 maxComponents:(unsigned long long)arg2;
- (id)identifierForElement:(id)arg1 maxComponents:(unsigned long long)arg2;

@end

