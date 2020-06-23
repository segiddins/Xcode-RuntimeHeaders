//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, NSMapTable, NSString;

@interface _IDENavigableItemExtraInfo : NSObject
{
    DVTExtension *_representedExtension;
    NSString *_childItemsKeyPath;
    Class _representedObjectClass;
    NSMapTable *_navigableItemsByRepresentedObject;
}

- (void).cxx_destruct;
@property(readonly) NSMapTable *navigableItemsByRepresentedObject; // @synthesize navigableItemsByRepresentedObject=_navigableItemsByRepresentedObject;
@property(retain) Class representedObjectClass; // @synthesize representedObjectClass=_representedObjectClass;
@property(copy) NSString *childItemsKeyPath; // @synthesize childItemsKeyPath=_childItemsKeyPath;
@property(retain) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
- (id)init;

@end

