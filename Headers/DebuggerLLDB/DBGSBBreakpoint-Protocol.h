//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBBreakpointLocation, DBGSBStream, DBGSBStringList;

@protocol DBGSBBreakpoint <NSObject>
- (void)SetCallbackToNull;
- (void)SetCallbackWithBaton:(void *)arg1;
- (id <DBGSBBreakpointLocation>)GetLocationAtIndex:(unsigned int)arg1;
- (id <DBGSBBreakpointLocation>)FindLocationByID:(int)arg1;
- (unsigned long long)GetNumLocations;
- (void)GetNames:(id <DBGSBStringList>)arg1;
- (void)RemoveName:(const char *)arg1;
- (_Bool)AddName:(const char *)arg1;
- (_Bool)IsEnabled;
- (void)SetEnabled:(_Bool)arg1;
- (_Bool)GetDescription:(id <DBGSBStream>)arg1;
- (void)SetCondition:(const char *)arg1;
- (void)SetIgnoreCount:(unsigned int)arg1;
- (unsigned int)GetHitCount;
- (int)GetID;
- (_Bool)IsValid;
@end

