//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUIssueCategory, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUIssuesCategoryView : NSTableCellView
{
    NSTextField *_numberOfIssuesLabel;
    GPUIssueCategory *_category;
}

@property __weak GPUIssueCategory *category; // @synthesize category=_category;
@property NSTextField *numberOfIssuesLabel; // @synthesize numberOfIssuesLabel=_numberOfIssuesLabel;
- (void).cxx_destruct;

@end

