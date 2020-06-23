//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTGradientImageButton.h>

#import <DVTUserInterfaceKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTDelayedMenuGradientImageButton : DVTGradientImageButton <DVTInvalidation>
{
    struct CGSize _menuOffset;
    id _menuSource;
    SEL _menuSelector;
}

+ (void)initialize;
+ (Class)cellClass;
- (void).cxx_destruct;
@property struct CGSize menuOffset; // @synthesize menuOffset=_menuOffset;
- (void)primitiveInvalidate;
- (void)showMenu:(id)arg1;
- (void)_runPopUp;
- (void)setMenuSource:(id)arg1 selector:(SEL)arg2;
@property float popUpDelay;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
