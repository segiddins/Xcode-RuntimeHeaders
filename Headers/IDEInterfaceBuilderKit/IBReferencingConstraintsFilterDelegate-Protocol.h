//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBReferencingConstraintsFilter;

@protocol IBReferencingConstraintsFilterDelegate <NSObject>
- (void)constraintFilterViewWillDeleteSelectedConstraints:(IBReferencingConstraintsFilter *)arg1;
- (void)constraintFilterViewWillChangeConstraintAttributeSelection:(IBReferencingConstraintsFilter *)arg1;
- (void)constraintFilterViewWillChangeHighlighted:(IBReferencingConstraintsFilter *)arg1 shouldHighlight:(BOOL)arg2;
@end

