//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class DBGViewObject, NSString;

@protocol DBGSelectableViewObject <NSObject>
- (DBGViewObject *)selectableViewObjectForIdentifier:(NSString *)arg1;
- (void)updateSelectableViewObjectsCache;
@end

