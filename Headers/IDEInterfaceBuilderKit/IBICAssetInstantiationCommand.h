//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBICAssetInstantiationCommandMenu, NSArray, NSSet, NSString;

@interface IBICAssetInstantiationCommand : NSObject
{
    BOOL _embedsSelectedItems;
    Class _itemClass;
    IBICAssetInstantiationCommandMenu *_submenu;
    NSString *_displayName;
    NSSet *_idioms;
    long long _insertionStyle;
    NSArray *_catalogClasses;
}

- (void).cxx_destruct;
@property(readonly) NSArray *catalogClasses; // @synthesize catalogClasses=_catalogClasses;
@property(readonly) long long insertionStyle; // @synthesize insertionStyle=_insertionStyle;
@property(readonly) BOOL embedsSelectedItems; // @synthesize embedsSelectedItems=_embedsSelectedItems;
@property(readonly) NSSet *idioms; // @synthesize idioms=_idioms;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) IBICAssetInstantiationCommandMenu *submenu; // @synthesize submenu=_submenu;
@property(readonly) Class itemClass; // @synthesize itemClass=_itemClass;
- (id)initWithExtension:(id)arg1;

@end

