//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSTableView, NSView;
@protocol SKInspectorComponentListContentViewDelegate;

@interface SKInspectorComponentListContentView : DVTLayoutView_ML
{
    NSTableView *_tableView;
    NSView *_menuView;
    id <SKInspectorComponentListContentViewDelegate> _delegate;
}

@property(retain, nonatomic) id <SKInspectorComponentListContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutBottomUp;

@end
