//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPathControl.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface IDEPathControl : NSPathControl <DVTInvalidation>
{
    NSString *_menuDefinitionIdentifier;
}

+ (Class)cellClass;
+ (unsigned long long)defaultFocusRingType;
+ (void)initialize;
@property(copy) NSString *menuDefinitionIdentifier; // @synthesize menuDefinitionIdentifier=_menuDefinitionIdentifier;
- (void).cxx_destruct;
- (id)accessibilityPopUpMenuParent:(id)arg1;
- (struct CGSize)sizeWanted;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)popUpMenuForComponentCell:(id)arg1;
- (void)_popUpMenuForComponentCell:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (struct CGRect)grabRect;
- (void)setFont:(id)arg1;
@property BOOL lastComponentFillsWidth;
@property int borderSides;
- (BOOL)isOpaque;
@property int gradientStyle;
- (void)primitiveInvalidate;
- (id)outputSelection;
- (void)updateBoundContent;
- (void)updateBoundSelectedNavigableItem;
- (void)setDelegate:(id)arg1;
- (id)dvtExtraBindings;
- (void)setCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

