//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUBufferViewerTableColumn.h>

@protocol GPUBufferViewerElement;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerElementTableColumn : GPUBufferViewerTableColumn
{
    id <GPUBufferViewerElement> _element;
}

+ (id)tableCloumnWithElement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GPUBufferViewerElement> element; // @synthesize element=_element;
- (double)extraWidth;
@property(readonly, nonatomic) double defaultWidth;
@property(readonly, nonatomic) Class cellClass;
- (id)initWithElement:(id)arg1;

@end

