//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IDECommandHandlerVendor-Protocol.h>

@class NSString;

@interface IBICCatalogDebugHandler : NSObject <IDECommandHandlerVendor>
{
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void)dumpAssetCatalogSchema:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
