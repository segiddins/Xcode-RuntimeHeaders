//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

#import <GPUDebugger/GPUTextureLoupeViewDelegate-Protocol.h>

@class GPUTextureClipView, GPUTextureLoupeView, NSDictionary, NSString, _TtC11GPUDebugger18GPUImageRenderView;
@protocol GPUTextureScrollViewDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface GPUTextureScrollView : NSScrollView <GPUTextureLoupeViewDelegate>
{
    id <NSObject> _willStartLiveMagnifyObserver;
    id <NSObject> _didEndLiveMagnifyObserver;
    id <NSObject> _willStartLiveScrollObserver;
    id <NSObject> _didEndLiveScrollObserver;
    id <NSObject> _didLiveScrollObserver;
    id <NSObject> _boundsDidChangeObserver;
    struct CGPoint _origin;
    struct CGPoint _click;
    BOOL _consumeEvent;
    _TtC11GPUDebugger18GPUImageRenderView *_imageRenderView;
    GPUTextureLoupeView *_loupeView;
    id <GPUTextureScrollViewDelegate> _delegate;
}

@property __weak id <GPUTextureScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) GPUTextureLoupeView *loupeView; // @synthesize loupeView=_loupeView;
@property __weak _TtC11GPUDebugger18GPUImageRenderView *imageRenderView; // @synthesize imageRenderView=_imageRenderView;
- (void).cxx_destruct;
- (void)loupeView:(id)arg1 didChangeSelectedPoint:(struct CGPoint)arg2;
- (void)layout;
- (void)updateLoupe;
- (void)synchronizeWithScrollView:(id)arg1;
@property(retain, nonatomic) NSDictionary *scrollState;
- (void)_userDidScrollOrMagnify;
- (void)reflectScrolledClipView:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_GPUTextureScrollViewInit;

// Remaining properties
@property(retain) GPUTextureClipView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

