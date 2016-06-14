//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, NSMapTable, NSString;

@interface _IDENavigableItemExtraInfo : NSObject
{
    DVTExtension *_representedExtension;
    NSString *_childItemsKeyPath;
    NSMapTable *_navigableItemsByRepresentedObject;
}

@property(readonly) NSMapTable *navigableItemsByRepresentedObject; // @synthesize navigableItemsByRepresentedObject=_navigableItemsByRepresentedObject;
@property(copy) NSString *childItemsKeyPath; // @synthesize childItemsKeyPath=_childItemsKeyPath;
@property(retain) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
- (void).cxx_destruct;
- (id)init;

@end

