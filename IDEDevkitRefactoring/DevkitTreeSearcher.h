//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DevkitTreeSearcher : NSObject
{
    struct DevkitTreeSearcherPatternElement *_pattern;
}

+ (BOOL)searchString:(id)arg1 matchesInTree:(id)arg2;
+ (id)findSearchString:(id)arg1 inTrees:(id)arg2;
+ (id)findSearchString:(id)arg1 inTree:(id)arg2;
+ (id)searcherWithSearchString:(id)arg1;
- (id)findFirstInTree:(id)arg1 withDiscriminator:(CDUnknownFunctionPointerType)arg2;
- (id)findFirstInTree:(id)arg1 withStop:(CDUnknownFunctionPointerType)arg2;
- (id)findFirstInTree:(id)arg1;
- (id)findAllInTree:(id)arg1 withStop:(CDUnknownFunctionPointerType)arg2;
- (id)findAllInTree:(id)arg1 withDiscriminator:(CDUnknownFunctionPointerType)arg2;
- (id)findAllInTree:(id)arg1;
- (id)findAllInTree:(id)arg1 withPattern:(struct DevkitTreeSearcherPatternElement *)arg2 withDiscriminator:(CDUnknownFunctionPointerType)arg3 withStop:(CDUnknownFunctionPointerType)arg4 stopOnMatch:(BOOL)arg5;
- (BOOL)matchInTree:(id)arg1;
- (BOOL)matchInTree:(id)arg1 withPattern:(struct DevkitTreeSearcherPatternElement *)arg2;
- (id)description;
- (id)subDescription:(struct DevkitTreeSearcherPatternElement *)arg1;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1;
- (struct DevkitTreeSearcherPatternElement *)parseSearchString:(id)arg1;

@end

