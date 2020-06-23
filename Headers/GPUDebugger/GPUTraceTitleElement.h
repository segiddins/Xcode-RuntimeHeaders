//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class DependencyViewerSKTextureCache, DependencyViewerVertex, GPUTraceSKStatLine, GPUTraceSKTruncatedLabel, GPUTraceStatBox, NSString, SKShapeNode, SKSpriteNode;

__attribute__((visibility("hidden")))
@interface GPUTraceTitleElement : SKNode
{
    SKNode *_contentRoot;
    GPUTraceSKStatLine *_GPUTimingLine;
    NSString *_issueFadeKey;
    NSString *_fadeActionKey;
    DependencyViewerSKTextureCache *_textureCache;
    double _magnification;
    BOOL _hasIssues;
    DependencyViewerVertex *_encoderNode;
    SKNode *_incomingEventBtn;
    SKNode *_outgoingEventBtn;
    SKSpriteNode *_issueBadge;
    GPUTraceStatBox *_statBox;
    GPUTraceSKTruncatedLabel *_titleBox;
    SKSpriteNode *_icon;
    SKShapeNode *_bg;
    struct CGRect _layoutFrame;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly, nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(readonly, nonatomic) BOOL hasIssues; // @synthesize hasIssues=_hasIssues;
@property(readonly, nonatomic) SKShapeNode *bg; // @synthesize bg=_bg;
@property(readonly, nonatomic) SKSpriteNode *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) GPUTraceSKTruncatedLabel *titleBox; // @synthesize titleBox=_titleBox;
@property(readonly, nonatomic) GPUTraceStatBox *statBox; // @synthesize statBox=_statBox;
@property(readonly, nonatomic) SKSpriteNode *issueBadge; // @synthesize issueBadge=_issueBadge;
@property(readonly) __weak SKNode *outgoingEventBtn; // @synthesize outgoingEventBtn=_outgoingEventBtn;
@property(readonly) __weak SKNode *incomingEventBtn; // @synthesize incomingEventBtn=_incomingEventBtn;
@property(nonatomic) double magnification; // @synthesize magnification=_magnification;
@property(readonly) __weak DependencyViewerVertex *encoderNode; // @synthesize encoderNode=_encoderNode;
- (void)_shaderProfilerDataUpdated:(id)arg1;
- (void)hideStats;
- (void)showStats;
- (void)draw;
- (id)_createEventNote:(id)arg1 withLabel:(id)arg2;
- (id)_createBorder:(struct CGRect)arg1 lineWidth:(double)arg2 lineColor:(id)arg3;
- (void)issueStateChanged:(BOOL)arg1;
- (void)addStats;
- (void)dealloc;
- (id)initWithNode:(id)arg1 withIssues:(BOOL)arg2 withTextureCache:(id)arg3;
- (id)initWithNode:(id)arg1 withTextureCache:(id)arg2;

@end

