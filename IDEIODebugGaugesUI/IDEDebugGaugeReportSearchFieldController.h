//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTSearchField, NSLayoutConstraint;

@interface IDEDebugGaugeReportSearchFieldController : NSViewController
{
    DVTSearchField *_searchField;
    NSLayoutConstraint *_filterFieldHeight;
}

@property __weak NSLayoutConstraint *filterFieldHeight; // @synthesize filterFieldHeight=_filterFieldHeight;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)loadView;
- (id)init;

@end

