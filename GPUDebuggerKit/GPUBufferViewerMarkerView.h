//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSColor, NSTextField;
@protocol GPUBufferViewerMarker;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerMarkerView : NSControl
{
    id <GPUBufferViewerMarker> _marker;
    unsigned long long _level;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    NSTextField *_labelView;
}

@property(retain, nonatomic) NSTextField *labelView; // @synthesize labelView=_labelView;
@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) id <GPUBufferViewerMarker> marker; // @synthesize marker=_marker;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)initWithMarker:(id)arg1;

@end

