//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEInterfaceBuilderKit/IBInspectorReferencingConstraintViewDelegate-Protocol.h>

@class IBDocument, IBDocumentMemberWrapper, IBLayoutConstraint, NSArray, NSString, NSView;
@protocol IBAutolayoutItem, IBInspectorReferencingConstraintViewControllerDelegate;

@interface IBInspectorReferencingConstraintViewController : DVTViewController <IBInspectorReferencingConstraintViewDelegate>
{
    NSArray *_observationTokens;
    IBLayoutConstraint *_constraint;
    id <IBInspectorReferencingConstraintViewControllerDelegate> _delegate;
    NSView<IBAutolayoutItem> *_referencedView;
    IBDocumentMemberWrapper *_memberWrapper;
    IBDocument *_document;
}

+ (id)viewControllerForConstraint:(id)arg1 referencingView:(id)arg2;
@property(retain, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) IBDocumentMemberWrapper *memberWrapper; // @synthesize memberWrapper=_memberWrapper;
@property(retain, nonatomic) NSView<IBAutolayoutItem> *referencedView; // @synthesize referencedView=_referencedView;
@property(nonatomic) __weak id <IBInspectorReferencingConstraintViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IBLayoutConstraint *constraint; // @synthesize constraint=_constraint;
- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)updateConstraintView;
- (unsigned long long)relatedViewAttribute;
- (unsigned long long)referencedViewAttribute;
- (id)relatedViewInConstraintRelationship;
- (BOOL)isFirstViewInConstraintRelationship;
- (void)updateLayoutType;
- (void)updateBorder;
- (void)updateImageView;
- (void)updateRelatedViewNameLabel;
- (void)updateConstantValueLabel;
- (void)updateConstantTypeLabel;
- (void)updateRelatedViewTypeLabel;
- (id)leftHandLabelFont;
- (id)rightHandLabelFont;
- (id)rightHandLabelTextColor;
- (id)leftHandLabelTextColor;
- (id)textForConstantTypeLabel;
- (id)textForRelatedViewTypeLabel;
- (id)textForAttributeType;
- (id)textForLayoutRelation;
- (long long)viewBorderAttributes;
- (long long)viewLayoutType;
- (BOOL)constraintIsInstalled;
- (BOOL)constraintHasConstant;
- (id)constraintView;
- (void)constraintView:(id)arg1 didInitiateEditWithSender:(id)arg2;
- (void)constraintViewDidInitiateDelete:(id)arg1;
- (void)constraintView:(id)arg1 didHandleDoubleMouseUpWithEvent:(id)arg2;
- (void)constraintView:(id)arg1 didHandleSingleMouseUpWithEvent:(id)arg2;
- (void)constraintViewWillChangeHighlighted:(id)arg1;
@property(nonatomic, getter=isSelected) BOOL selected;
- (void)primitiveInvalidate;
- (id)initWithConstraint:(id)arg1 referencingView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

