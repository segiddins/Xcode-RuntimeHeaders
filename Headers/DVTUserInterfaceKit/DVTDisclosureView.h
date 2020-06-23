//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <DVTUserInterfaceKit/DVTDisclosureHeaderViewDelegate-Protocol.h>

@class DVTBorderView, DVTDisclosureHeaderView, NSColor, NSString, NSView;

@interface DVTDisclosureView : DVTLayoutView_ML <DVTDisclosureHeaderViewDelegate>
{
    DVTBorderView *_bottomBorderView;
    BOOL _wantsUpdateLayer;
    BOOL _adjustsBottomBorderColorWithTheme;
    BOOL _shouldAlwaysDrawBottomBorder;
    DVTDisclosureHeaderView *_headerView;
    NSView *_contentView;
    NSColor *_bottomBorderColor;
    NSColor *_backgroundColor;
    NSString *_disclosureStatePersistenceDefaultsKey;
    CDStruct_bf6d4a14 _contentMargins;
}

+ (Class)headerViewClass;
+ (id)keyPathsForValuesAffectingDisclosed;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_bf6d4a14 contentMargins; // @synthesize contentMargins=_contentMargins;
@property(copy, nonatomic) NSString *disclosureStatePersistenceDefaultsKey; // @synthesize disclosureStatePersistenceDefaultsKey=_disclosureStatePersistenceDefaultsKey;
@property(nonatomic) BOOL shouldAlwaysDrawBottomBorder; // @synthesize shouldAlwaysDrawBottomBorder=_shouldAlwaysDrawBottomBorder;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL adjustsBottomBorderColorWithTheme; // @synthesize adjustsBottomBorderColorWithTheme=_adjustsBottomBorderColorWithTheme;
@property(copy, nonatomic) NSColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DVTDisclosureHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)accessibilityTitle;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (void)setAccessibilityExpanded:(BOOL)arg1;
- (BOOL)isAccessibilityExpanded;
- (BOOL)isAccessibilityElement;
- (struct CGRect)draggingRect;
- (void)disclosureHeaderView:(id)arg1 didChangeDisclosedState:(BOOL)arg2;
@property(nonatomic, getter=isDisclosed) BOOL disclosed;
- (void)reflectDefaultsDisclosureState;
- (void)updateLayer;
- (struct CGRect)bottomBorderRect;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)shouldDrawBottomBorder;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitDisclosureView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

