//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTBorderedView, DVTTabChooserView, NSPopUpButton;

@interface Xcode3ProjectEditorTopBarView : DVTLayoutView_ML
{
    DVTTabChooserView *_tabChooser;
    DVTBorderedView *_sourceListToggleBorderedView;
    DVTBorderedView *_sourceListPopUpBorderedView;
    NSPopUpButton *_sourceListPopUpButton;
}

@property(retain) NSPopUpButton *sourceListPopUpButton; // @synthesize sourceListPopUpButton=_sourceListPopUpButton;
@property(retain) DVTBorderedView *sourceListPopUpBorderedView; // @synthesize sourceListPopUpBorderedView=_sourceListPopUpBorderedView;
@property(retain) DVTBorderedView *sourceListToggleBorderedView; // @synthesize sourceListToggleBorderedView=_sourceListToggleBorderedView;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutTopDown;

@end

