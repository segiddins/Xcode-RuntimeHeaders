//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEThread.h>

#import <DebuggerUI/DBGNavigableItemPerformance-Protocol.h>

@class NSImage;

@interface IDEThread (DBGNavigableItemPropertySupport) <DBGNavigableItemPerformance>
+ (id)keyPathsForValuesAffectingStatusIcon;
- (id)sortValue;
@property(readonly) NSImage *statusIcon;
@end

