//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/GPUBufferViewerTableColumn.h>

@protocol GPUBufferViewerElement;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerElementTableColumn : GPUBufferViewerTableColumn
{
    id <GPUBufferViewerElement> _element;
}

+ (id)tableCloumnWithElement:(id)arg1;
@property(readonly, nonatomic) id <GPUBufferViewerElement> element; // @synthesize element=_element;
- (void).cxx_destruct;
- (double)extraWidth;
@property(readonly, nonatomic) double defaultWidth;
@property(readonly, nonatomic) Class cellClass;
- (id)initWithElement:(id)arg1;

@end

