//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTextField, NSTrackingArea;

@interface DVTFavoriteTableCellView : NSTableCellView
{
    NSTrackingArea *trackingArea_;
    BOOL _showFavouriteButton;
    NSButton *favoriteButton;
    NSTextField *_urlTextField;
}

@property NSTextField *urlTextField; // @synthesize urlTextField=_urlTextField;
@property BOOL showFavouriteButton; // @synthesize showFavouriteButton=_showFavouriteButton;
@property NSButton *favoriteButton; // @synthesize favoriteButton;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateViewContent:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void)awakeFromNib;

@end
