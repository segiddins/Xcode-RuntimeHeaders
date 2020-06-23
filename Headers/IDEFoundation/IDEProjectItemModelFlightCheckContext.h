//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEFlightCheckingContext-Protocol.h>

@class NSString;
@protocol IDEPortalInfoDelegate, IDEProjectItem;

@interface IDEProjectItemModelFlightCheckContext : NSObject <IDEFlightCheckingContext>
{
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    id <IDEProjectItem> _item;
}

@property(nonatomic) __weak id <IDEProjectItem> item; // @synthesize item=_item;
@property(nonatomic) __weak id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
- (void).cxx_destruct;
- (id)initWithPortalInfoDelegate:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

