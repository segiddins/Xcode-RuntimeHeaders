//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDEAlertEvent, NSString;

@interface IDEAlertsPrefsBehaviorTableCellView : NSTableCellView
{
    BOOL _active;
    IDEAlertEvent *_alertEvent;
}

+ (void)initialize;
@property(retain, nonatomic) IDEAlertEvent *alertEvent; // @synthesize alertEvent=_alertEvent;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)beginEditingFromEvent:(id)arg1 inTableView:(id)arg2 column:(long long)arg3 row:(long long)arg4;
@property(retain, nonatomic) NSString *title;

@end

