//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTWeakInterposer.h>

@class DVTStackBacktrace, _DVTWeakInterposerHelper;

@interface DVTWeakInterposer_ProxyHelperReference : DVTWeakInterposer
{
    _DVTWeakInterposerHelper *_helper;
    DVTStackBacktrace *_representedObjectDeallocatedStackBacktrace;
}

- (id)representedObject;
- (void)dealloc;
@property _DVTWeakInterposerHelper *helper; // @synthesize helper=_helper;
- (id)representedObjectDeallocatedStackBacktrace;

@end

