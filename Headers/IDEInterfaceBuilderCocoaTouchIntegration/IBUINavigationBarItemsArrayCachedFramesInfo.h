//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewCachedGeometryInfo.h>

@class IBUINavigationBar, NSString;

@interface IBUINavigationBarItemsArrayCachedFramesInfo : IBUIViewCachedGeometryInfo
{
    IBUINavigationBar *_navBar;
    NSString *_itemsKeyPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *itemsKeyPath; // @synthesize itemsKeyPath=_itemsKeyPath;
@property __weak IBUINavigationBar *navBar; // @synthesize navBar=_navBar;
- (id)cachedValueFromRequestedValue:(id)arg1;
- (id)initWithNavigationBar:(id)arg1 itemsKeyPath:(id)arg2 cachedKeyPath:(id)arg3 requestedKeyPath:(id)arg4;

@end

