//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol Xcode3SourceListItemEditing;

@protocol Xcode3SourceListItemEditing <NSObject>
+ (id <Xcode3SourceListItemEditing>)deserializedSourceListItem:(NSDictionary *)arg1;
+ (NSString *)pasteboardDataType;
- (NSDictionary *)serializedSourceListItem;
- (NSArray *)supportedSourceListItemEditorClasses;
@end

