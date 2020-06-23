//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueResolvingViewController.h>

@class IBDocument, NSArray;

@interface IBAutolayoutLocalizationIssueWithMultipleConstraintsResolvingViewController : IBAutolayoutIssueResolvingViewController
{
    IBDocument *_documentForConstraints;
    NSArray *_constraintItems;
}

@property(copy, nonatomic) NSArray *constraintItems; // @synthesize constraintItems=_constraintItems;
@property(readonly, nonatomic) IBDocument *documentForConstraints; // @synthesize documentForConstraints=_documentForConstraints;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)resizeConstraints;
- (void)deleteConstraints;
- (id)initWithFixedLeadingTrailingWithCenterConstraintSet:(id)arg1 document:(id)arg2;

@end

