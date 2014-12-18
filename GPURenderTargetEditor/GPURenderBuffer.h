//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "DVTInvalidation.h"
#import "GPUTraceBubbleOwner.h"

@class DVTStackBacktrace, DYRenderingAttributes, GPURenderBufferButton, GPURenderBufferView, GPURenderJob, GPUTraceEditor, GPUTraceResourceInfoBubble, GPUTraceResourceSettingsBubble, NSLayoutConstraint, NSMenu, NSString, NSTextField;

@interface GPURenderBuffer : NSViewController <GPUTraceBubbleOwner, DVTInvalidation>
{
    GPURenderBufferButton *_infoButton;
    GPURenderBufferButton *_settingsButton;
    NSLayoutConstraint *_labelConstraint;
    NSMenu *_contextMenuInitedWith;
    GPUTraceResourceInfoBubble *_infoBubble;
    GPUTraceResourceSettingsBubble *_settingsBubble;
    GPUTraceEditor *_gpuTraceEditor;
    BOOL _showDepth;
    unsigned int _attachmentEnum;
    GPURenderJob *_renderJob;
    id <DYResource> _resource;
    DYRenderingAttributes *_displayAttributes;
    NSTextField *_bufferLabelProxyTextField;
}

+ (void)initialize;
+ (id)assetBundle;
@property __weak NSTextField *bufferLabelProxyTextField; // @synthesize bufferLabelProxyTextField=_bufferLabelProxyTextField;
@property(readonly, nonatomic) DYRenderingAttributes *displayAttributes; // @synthesize displayAttributes=_displayAttributes;
@property(retain, nonatomic) id <DYResource> resource; // @synthesize resource=_resource;
@property(retain, nonatomic) GPURenderJob *renderJob; // @synthesize renderJob=_renderJob;
- (void).cxx_destruct;
- (id)accessibleChildren;
- (id)currentDisplayableItem;
- (void)settingsUpdate;
- (void)settingsToggleAlphaEnable;
- (void)settingsToggleBlueEnable;
- (void)settingsToggleGreenEnable;
- (void)settingsToggleRedEnable;
- (void)unloadView;
- (void)updateView;
- (void)settingsBubbleClosed;
- (void)showSettings:(id)arg1;
- (void)infoBubbleClosed;
- (void)showInfo:(id)arg1;
- (struct CGPoint)_popoverPointForParentButton:(id)arg1;
- (void)hideButtons:(BOOL)arg1;
@property(readonly, nonatomic) GPURenderBufferView *renderBufferView; // @dynamic renderBufferView;
@property(readonly, nonatomic) NSString *name;
@property(readonly) struct CGSize resourceImageSize;
- (void)_updateConstraints;
- (void)loadView;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithContextMenu:(id)arg1 traceEditor:(id)arg2 displayAttributes:(id)arg3 showDepth:(BOOL)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

