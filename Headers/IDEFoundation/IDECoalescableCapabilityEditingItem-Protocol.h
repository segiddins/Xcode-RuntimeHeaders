//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSSet, NSString;
@protocol IDECoalescableCapabilityEditingItemDelegate;

@protocol IDECoalescableCapabilityEditingItem
+ (NSSet *)coalescableReadOnlyKeyPaths;
@property(readonly) NSDictionary *coalescableWriteableKeyPathToDataSource;
@property(nonatomic) __weak id <IDECoalescableCapabilityEditingItemDelegate> delegate;
- (void)wantsUpdateKeyPath:(NSString *)arg1 value:(id)arg2;
@end

