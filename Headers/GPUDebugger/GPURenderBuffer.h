//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class GPURenderBufferView, GPURenderJob, NSButton, NSLayoutConstraint, NSPopover, NSString, NSTextField;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface GPURenderBuffer : NSViewController
{
    NSButton *_infoButton;
    NSButton *_settingsButton;
    NSLayoutConstraint *_labelConstraint;
    NSPopover *_infoPopover;
    NSPopover *_settingsPopover;
    id <NSObject> _renderingAttributesDidChangeObserver;
    GPURenderJob *_renderJob;
    NSTextField *_bufferLabelProxyTextField;
}

+ (id)assetBundle;
- (void).cxx_destruct;
@property __weak NSTextField *bufferLabelProxyTextField; // @synthesize bufferLabelProxyTextField=_bufferLabelProxyTextField;
@property(retain, nonatomic) GPURenderJob *renderJob; // @synthesize renderJob=_renderJob;
- (void)dumpImage:(id)arg1 asRaw:(BOOL)arg2;
- (id)accessibleChildren;
- (void)unloadView;
- (void)showSettings:(id)arg1;
- (void)showInfo:(id)arg1;
- (struct CGPoint)_popoverPointForParentButton:(id)arg1;
@property(readonly, nonatomic) __weak GPURenderBufferView *renderBufferView;
@property(readonly, nonatomic) NSString *name;
@property(readonly) struct CGSize resourceImageSize;
- (void)loadView;
- (id)description;
- (void)dealloc;
- (id)init;

@end

