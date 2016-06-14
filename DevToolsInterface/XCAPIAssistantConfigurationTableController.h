//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSTableViewDataSource-Protocol.h>
#import <DevToolsInterface/NSTableViewDelegate-Protocol.h>

@class NSArray, NSString, XCAPIAssistantConfigurationArrayController, XCAPIAssistantConfigurationTable;

@interface XCAPIAssistantConfigurationTableController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    XCAPIAssistantConfigurationTable *_tableView;
    XCAPIAssistantConfigurationArrayController *configurationArrayController;
    NSArray *m_userOrderedSlices;
}

@property(retain, nonatomic) NSArray *userOrderedSlices; // @synthesize userOrderedSlices=m_userOrderedSlices;
@property(retain, nonatomic) XCAPIAssistantConfigurationArrayController *configurationArrayController; // @synthesize configurationArrayController;
@property(retain, nonatomic) XCAPIAssistantConfigurationTable *tableView; // @synthesize tableView=_tableView;
- (id)availableSlices;
- (id)configurationTableFont;
- (void)printOrder:(id)arg1;
- (void)resetSliceDefaults;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)updateSliceVisibilityProperty:(id)arg1;
- (void)_updateSliceOrderProperties;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)awakeFromNib;
- (void)sortUserSlices;
- (void)persistUserSlices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

