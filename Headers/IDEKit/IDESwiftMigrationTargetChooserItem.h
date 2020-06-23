//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSMutableArray, NSString;

@interface IDESwiftMigrationTargetChooserItem : NSObject
{
    id _representedObject;
    IDESwiftMigrationTargetChooserItem *_parentItem;
    NSMutableArray *_childItems;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
@property(retain) IDESwiftMigrationTargetChooserItem *parentItem; // @synthesize parentItem=_parentItem;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)removeObjectFromChildItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
- (id)_childItems;
@property(readonly, copy) NSMutableArray *mutableChildItems;
@property(readonly, copy) NSArray *arrangedChildItems;
@property(readonly, copy) NSArray *childItems;
@property(readonly) double rowHeight;
@property(readonly, copy) NSString *warningMessage;
@property(readonly, copy) NSImage *iconImage;
@property long long state;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly, copy) NSString *subtitle;
@property(readonly, copy) NSString *title;
- (id)initWithRepresentedObject:(id)arg1;

@end

