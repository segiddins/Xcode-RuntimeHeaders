//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/NSObject-Protocol.h>

@protocol PBXMarkerDelegateProtocol <NSObject>
- (int)state;
- (BOOL)isEnabled;
- (void)markChanged;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
@end

