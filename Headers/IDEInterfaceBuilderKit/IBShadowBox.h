//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSShadow;

@interface IBShadowBox : NSView
{
    NSShadow *_shadow;
    unsigned long long _shadowedEdges;
}

@property(nonatomic) unsigned long long shadowedEdges; // @synthesize shadowedEdges=_shadowedEdges;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
@property(copy) NSShadow *shadow; // @synthesize shadow=_shadow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

