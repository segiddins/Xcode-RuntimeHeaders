//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface DVT_VMUScanOverlay : NSObject
{
    NSMutableArray *_rules;
}

+ (id)defaultOverlayWithScanner:(id)arg1;
+ (id)defaultOverlay;
@property(readonly, nonatomic) NSArray *refinementRules; // @synthesize refinementRules=_rules;
- (void).cxx_destruct;
- (void)addMetadataRefinementRule:(CDUnknownBlockType)arg1;
- (id)initWithScanner:(id)arg1;

@end

