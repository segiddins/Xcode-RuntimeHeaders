//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString, _TtC13IDEFoundation41SigningEditorCapabilityEditingItemManager;
@protocol IDECoalescableCapabilityEditingItem;

@protocol IDECoalescableCapabilityEditingItemDelegate
- (void)didSet:(id <IDECoalescableCapabilityEditingItem>)arg1 keyPath:(NSString *)arg2 value:(id)arg3;
- (BOOL)willSet:(id <IDECoalescableCapabilityEditingItem>)arg1 keyPath:(NSString *)arg2 dataSources:(NSSet *)arg3 error:(id *)arg4;
- (void)didUpdateDataSource;
@property(nonatomic, readonly) _TtC13IDEFoundation41SigningEditorCapabilityEditingItemManager *manager;
@end
