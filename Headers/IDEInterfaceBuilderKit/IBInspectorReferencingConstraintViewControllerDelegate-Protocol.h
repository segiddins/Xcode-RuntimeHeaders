//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBInspectorReferencingConstraintViewController, NSEvent, NSView;

@protocol IBInspectorReferencingConstraintViewControllerDelegate <NSObject>
- (void)referencingConstraintViewControllerInitiatedRevealInEditor:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerInitiatedDelete:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerStopHighlightingConstraint:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerStartHighlightingConstraint:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerSelectConstraint:(IBInspectorReferencingConstraintViewController *)arg1 withEvent:(NSEvent *)arg2;
- (void)referencingConstraintViewControllerEditConstraint:(IBInspectorReferencingConstraintViewController *)arg1 sender:(NSView *)arg2;
@end

