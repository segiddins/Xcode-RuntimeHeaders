//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTabChooserView, NSPopUpButton;

@interface Xcode3ProjectEditorTopBarView : DVTStructuredLayoutView
{
    DVTTabChooserView *_tabChooserView;
    DVTBorderedView *_sourceListToggleBorderedView;
    DVTBorderedView *_sourceListPopUpBorderedView;
    NSPopUpButton *_sourceListPopUpButton;
    DVTGradientImageButton *_sourceListVisiblityToggleButton;
}

- (void).cxx_destruct;
@property(retain) DVTGradientImageButton *sourceListVisiblityToggleButton; // @synthesize sourceListVisiblityToggleButton=_sourceListVisiblityToggleButton;
@property(retain) NSPopUpButton *sourceListPopUpButton; // @synthesize sourceListPopUpButton=_sourceListPopUpButton;
@property(retain) DVTBorderedView *sourceListPopUpBorderedView; // @synthesize sourceListPopUpBorderedView=_sourceListPopUpBorderedView;
@property(retain) DVTBorderedView *sourceListToggleBorderedView; // @synthesize sourceListToggleBorderedView=_sourceListToggleBorderedView;
@property(retain) DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end

