//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DVTSourceEditor/NSPrintPanelAccessorizing-Protocol.h>

@class MISSING_TYPE, NSPopUpButton;

@interface _TtC15DVTSourceEditor44DVTSourceEditorPrintPanelAccessoryController : NSViewController <NSPrintPanelAccessorizing>
{
    MISSING_TYPE *fontAndColorThemePopupButton;
    MISSING_TYPE *printView;
    MISSING_TYPE *selectedFontAndColorTheme;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didSelectTheme:(id)arg1;
- (void)viewDidLoad;
- (id)keyPathsForValuesAffectingPreview;
- (id)localizedSummaryItems;
@property(nonatomic, retain) NSPopUpButton *fontAndColorThemePopupButton; // @synthesize fontAndColorThemePopupButton;

@end

