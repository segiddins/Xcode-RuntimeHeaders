//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP6IDEKit38IDETestingAnnotationActionMenuDelegate_;

@interface _TtC6IDEKit30IDETestingAnnotationActionMenu : NSObject
{
    MISSING_TYPE *actionMenu;
    MISSING_TYPE *delegate;
}

+ (BOOL)shouldPresentMenuForTestLocation:(id)arg1 testPlan:(id)arg2 allowSelectingConfiguration:(BOOL)arg3;
- (void).cxx_destruct;
- (id)init;
- (void)showPopoverRelativeToFrame:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 dark:(BOOL)arg4;
- (id)initWithTestLocation:(id)arg1 testPlan:(id)arg2 allowSelectingConfiguration:(BOOL)arg3;
@property(nonatomic) __weak id <_TtP6IDEKit38IDETestingAnnotationActionMenuDelegate_> delegate; // @synthesize delegate;

@end

