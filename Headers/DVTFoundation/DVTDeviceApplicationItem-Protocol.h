//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol DVTDeviceApplicationItem <NSObject>
@property(readonly) BOOL isLeaf;
@property(readonly) NSSet *children;
@property(readonly) NSString *name;

@optional
@property(readonly, copy) NSString *installedPath;
@end

