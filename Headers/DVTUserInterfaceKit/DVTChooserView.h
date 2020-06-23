//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@class DVTChoice, NSArray, NSMutableArray, NSNumber, NSString;
@protocol DVTCancellable, DVTChooserViewDelegate;

@interface DVTChooserView : DVTBorderedView
{
    NSArray *_choices;
    NSMutableArray *_buttons;
    id <DVTCancellable> _selectionBindingObservation;
    NSString *_selectionBindingKeyPath;
    id _selectionBindingController;
    BOOL _selectionBindingIsPlural;
    int _gradientStyle;
    DVTChoice *_selectedChoice;
    id <DVTChooserViewDelegate> _delegate;
    double _buttonSpacing;
    NSNumber *_explicitImageScaling;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *explicitImageScaling; // @synthesize explicitImageScaling=_explicitImageScaling;
@property(nonatomic) double buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(retain) id <DVTChooserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(retain, nonatomic) DVTChoice *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(nonatomic) int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(nonatomic) unsigned long long selectedIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_udpatePushButtonAttributes;
- (struct CGSize)effectiveButtonSize;
- (void)synchronizeNumberOfButtons;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)choiceClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

