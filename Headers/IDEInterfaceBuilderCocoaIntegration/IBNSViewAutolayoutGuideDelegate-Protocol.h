//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/NSObject-Protocol.h>

@class IBNSViewAutolayoutGuide, NSLayoutGuide, NSObject;
@protocol IBAutolayoutItem;

@protocol IBNSViewAutolayoutGuideDelegate <NSObject>
- (struct CGRect)ibFrameForViewLayoutGuide:(IBNSViewAutolayoutGuide *)arg1;
- (NSLayoutGuide *)ibLayoutGuideForViewLayoutGuide:(IBNSViewAutolayoutGuide *)arg1;
- (NSObject<IBAutolayoutItem> *)ibEffectiveParentItemForReferencingConstraintTraversalOfViewLayoutGuide:(IBNSViewAutolayoutGuide *)arg1;
- (NSObject<IBAutolayoutItem> *)ibContainingItemForViewLayoutGuide:(IBNSViewAutolayoutGuide *)arg1;
@end
