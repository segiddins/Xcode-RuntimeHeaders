//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBUIViewAutolayoutGuide, NSObject;
@protocol IBAutolayoutItem;

@protocol IBUIViewAutolayoutGuideDelegate <NSObject>
- (NSObject<IBAutolayoutItem> *)ibEffectiveParentItemForReferencingConstraintTraversalOfViewLayoutGuide:(IBUIViewAutolayoutGuide *)arg1;
- (NSObject<IBAutolayoutItem> *)ibContainingItemForViewLayoutGuide:(IBUIViewAutolayoutGuide *)arg1;
@end

