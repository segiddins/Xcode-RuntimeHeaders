//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class DBGViewObject, NSString;

@protocol DBGSelectableViewObject <NSObject>
- (DBGViewObject *)selectableViewObjectForIdentifier:(NSString *)arg1;
- (void)updateSelectableViewObjectsCache;
@end

