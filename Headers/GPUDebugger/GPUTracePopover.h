//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUTraceAPIItem, GPUTraceContentPopover, NSPopover, NSView;

__attribute__((visibility("hidden")))
@interface GPUTracePopover : NSObject
{
    GPUTraceContentPopover *_thumbnailContentController;
    NSPopover *_thumbnailPopover;
    NSView *_contentView;
    unsigned long long _edge;
    BOOL _forceSkipPopover;
    BOOL _previousTooltip;
    BOOL _finishAnimate;
    BOOL _animates;
    BOOL _open;
    BOOL _truncate;
    BOOL _showTooltip;
    BOOL _usePadding;
    GPUTraceAPIItem *_alias;
    GPUTraceAPIItem *_item;
    struct CGRect _displayRect;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL usePadding; // @synthesize usePadding=_usePadding;
@property(nonatomic) BOOL showTooltip; // @synthesize showTooltip=_showTooltip;
@property(nonatomic) BOOL truncate; // @synthesize truncate=_truncate;
@property(nonatomic) BOOL open; // @synthesize open=_open;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
@property(retain, nonatomic) GPUTraceAPIItem *item; // @synthesize item=_item;
@property(retain, nonatomic) GPUTraceAPIItem *alias; // @synthesize alias=_alias;
- (void)_update;
- (void)_flushAnimation:(id)arg1;
- (id)initWithView:(id)arg1 preferredEdge:(unsigned long long)arg2;

@end

