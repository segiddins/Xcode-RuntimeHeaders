//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DEFNVHashCache, NSArray, NSString;

@interface DEContextSharedState : NSObject
{
    NSArray *_diffDescriptors;
    DEFNVHashCache *_hashCache;
    NSString *_diffString;
}

- (void).cxx_destruct;
@property(retain) NSString *diffString; // @synthesize diffString=_diffString;
@property(retain) DEFNVHashCache *hashCache; // @synthesize hashCache=_hashCache;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
- (id)init;

@end
