//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUTraceOutlineItem, SKNode;

__attribute__((visibility("hidden")))
@interface DVSKTouchEvent : NSObject
{
    GPUTraceOutlineItem *_outlineItem;
    unsigned long long _action;
    id _menu;
    SKNode *_anchorNode;
}

@property(retain, nonatomic) SKNode *anchorNode; // @synthesize anchorNode=_anchorNode;
@property(readonly, nonatomic) id menu; // @synthesize menu=_menu;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak GPUTraceOutlineItem *outlineItem; // @synthesize outlineItem=_outlineItem;
- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)arg1 outlineItem:(id)arg2 menu:(id)arg3 anchorNode:(id)arg4;

@end

