//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTGradientImageButton.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTDelayedMenuGradientImageButton : DVTGradientImageButton <DVTInvalidation>
{
    struct CGSize _menuOffset;
    id _menuSource;
    SEL _menuSelector;
}

+ (void)initialize;
+ (Class)cellClass;
@property struct CGSize menuOffset; // @synthesize menuOffset=_menuOffset;
- (void).cxx_destruct;
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

