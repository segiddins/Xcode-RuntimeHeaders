//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBStoryboardCanvasHalfLinkPath : NSObject
{
    long long _edgeIndex;
    long long _edgeCount;
    long long _extraBefore;
    long long _extraAfter;
}

@property long long extraAfter; // @synthesize extraAfter=_extraAfter;
@property long long extraBefore; // @synthesize extraBefore=_extraBefore;
@property long long edgeCount; // @synthesize edgeCount=_edgeCount;
@property long long edgeIndex; // @synthesize edgeIndex=_edgeIndex;
- (id)initWithEdgeIndex:(long long)arg1 edgeCount:(long long)arg2 extraBefore:(long long)arg3 extraAfter:(long long)arg4;

@end
