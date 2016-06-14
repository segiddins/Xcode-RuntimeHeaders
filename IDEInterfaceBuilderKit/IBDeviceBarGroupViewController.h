//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, NSMapTable, NSPopUpButton, NSStackView, NSString, NSTextField;
@protocol IBDeviceBarGroupViewControllerDelegate;

@interface IBDeviceBarGroupViewController : NSViewController
{
    NSStackView *_verticalStackView;
    NSStackView *_itemsStackView;
    NSTextField *_contentTextField;
    NSLayoutConstraint *_contentTextFieldWidthConstraint;
    NSTextField *_groupLabel;
    NSPopUpButton *_popUpButton;
    NSMapTable *_configurationsByControlMap;
    double _constrainButtonsToHeight;
    double _fullWidthUncollapsed;
    BOOL _customizing;
    BOOL _collapsed;
    CDUnknownBlockType _selectionChangedBlock;
    NSArray *_buttons;
    NSAttributedString *_contentAttributedString;
    NSString *_groupTitle;
    id _selectedConfiguration;
    id <IBDeviceBarGroupViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IBDeviceBarGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic, getter=isCustomizing) BOOL customizing; // @synthesize customizing=_customizing;
@property(copy, nonatomic) NSAttributedString *contentAttributedString; // @synthesize contentAttributedString=_contentAttributedString;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) CDUnknownBlockType selectionChangedBlock; // @synthesize selectionChangedBlock=_selectionChangedBlock;
- (void).cxx_destruct;
- (id)selectedTemplateImageFromImage:(id)arg1 state:(unsigned long long)arg2;
- (void)restoreConfiguration:(id)arg1 comparisonBlock:(CDUnknownBlockType)arg2;
- (void)fillStack;
- (void)_turnOffAllButtonsInStackview:(id)arg1 except:(id)arg2;
- (void)selectPopUpItem:(id)arg1;
- (void)selectItem:(id)arg1;
- (id)labelFont;
- (id)labelColor;
- (void)constrainButtonsToHeight:(double)arg1;
@property(readonly, nonatomic) struct CGSize itemsStackFittingSize;
- (void)_fill;
- (void)_showItemsInPopUp;
- (id)_addItemToCollapsedStackPopUp:(id)arg1 withImage:(id)arg2 title:(id)arg3 action:(SEL)arg4;
- (void)setImage:(id)arg1 ofMenuItemOfPopUpButton:(id)arg2;
- (id)_collapsedStackPopUpButton;
- (void)_addGroupLabel;
- (void)_addContentTextField;
- (void)_installFixedWidthConstraintOnContentTextField;
- (void)_installItemsStackViewHeightConstraint;
@property(readonly, nonatomic) double fullWidthUncollapsed;
- (void)_showItemsInStack;
- (id)initWithGroupTitle:(id)arg1 buttons:(id)arg2;

@end

