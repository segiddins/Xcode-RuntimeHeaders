//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class DVTSourceLandmarkItem;

@protocol DVTSourceLandmarkProvider <NSObject>
- (struct _NSRange)lineRangeOfSourceLandmark:(DVTSourceLandmarkItem *)arg1;
- (DVTSourceLandmarkItem *)sourceLandmarkItemAtLineNumber:(unsigned long long)arg1;
- (DVTSourceLandmarkItem *)sourceLandmarkItemAtCharacterIndex:(unsigned long long)arg1;
@end

