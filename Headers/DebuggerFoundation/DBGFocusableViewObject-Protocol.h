//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class DBGViewObject;
@protocol DBGFocusableViewObject;

@protocol DBGFocusableViewObject <NSObject>
@property(readonly) struct CGRect bounds;

@optional
- (DBGViewObject<DBGFocusableViewObject> *)forwardFocusToViewObject;
@end

