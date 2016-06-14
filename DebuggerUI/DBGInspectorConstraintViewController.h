//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DBGLayoutConstraint, NSButton, NSImageView, NSTextField, NSTrackingArea;

@interface DBGInspectorConstraintViewController : DVTViewController
{
    DBGLayoutConstraint *_constraintModel;
    NSTrackingArea *_rolloverTrackingArea;
    BOOL _mouseIsOver;
    BOOL _constraintIsAffecting;
    NSTextField *_constraintFormulaField;
    NSTextField *_constraintCategoryField;
    NSButton *_moreInfoButton;
    NSImageView *_constraintIconImageView;
    id _relativeToItem;
}

@property BOOL mouseIsOver; // @synthesize mouseIsOver=_mouseIsOver;
@property(retain, nonatomic) id relativeToItem; // @synthesize relativeToItem=_relativeToItem;
@property(retain) NSImageView *constraintIconImageView; // @synthesize constraintIconImageView=_constraintIconImageView;
@property(retain, nonatomic) NSButton *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;
@property(retain, nonatomic) NSTextField *constraintCategoryField; // @synthesize constraintCategoryField=_constraintCategoryField;
@property(retain, nonatomic) NSTextField *constraintFormulaField; // @synthesize constraintFormulaField=_constraintFormulaField;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property BOOL constraintIsAffecting;
- (id)constraintIcon;
- (void)updateTextAndImageFields;
- (id)colorForTextField:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) DBGLayoutConstraint *constraintModel;

@end

