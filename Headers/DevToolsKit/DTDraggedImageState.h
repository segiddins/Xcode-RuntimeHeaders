//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTDraggedImageState : NSObject
{
    struct CGPoint anchorPoint;
    BOOL isAnchorPointExplicit;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)synthesizedAnchorPoint:(struct CGPoint *)arg1 forSubiquentState:(id)arg2;
- (void)synthesizeAnchorPointFromPreviousStates:(id)arg1;
- (id)image;
- (struct CGPoint)anchorPoint;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (BOOL)isAnchorPointExplicit;

@end

