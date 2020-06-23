//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTDeviceKit/NSObject-Protocol.h>

@class DVTDevice, NSMutableArray, NSString;

@protocol DVTDevicesListItem <NSObject>
@property(readonly) NSMutableArray *children;
@property(readonly, getter=isLeaf) BOOL leaf;
@property(retain) DVTDevice *device;
@property(readonly, getter=isGroupItem) BOOL groupItem;
@property(readonly, getter=isEditable) BOOL editable;
@property(retain) NSString *name;
@end
