//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSMenu, NSPopUpButtonCell;

@interface XCElementActionButton : NSButton
{
    NSPopUpButtonCell *_popUpCell;
    NSMenu *_menu;
    struct CGSize _menuOffset;
    id _currentMenuSource;
    SEL _currentMenuSelector;
}

- (void)dealloc;
- (void)mouseDown:(id)arg1;
- (void)_runPopUp:(id)arg1;
- (void)setCurrentMenuSource:(id)arg1 selector:(SEL)arg2;
- (id)menu;
- (void)setMenu:(id)arg1;
- (struct CGSize)menuOffset;
- (void)setMenuOffset:(struct CGSize)arg1;

@end

