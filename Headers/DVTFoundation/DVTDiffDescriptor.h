//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>
#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSIndexSet, NSMutableArray;

@interface DVTDiffDescriptor : NSObject <NSCoding, NSCopying, DVTDiffHashing>
{
    struct _NSRange _originalTokenRange;
    struct _NSRange _modifiedTokenRange;
    struct _NSRange _ancestorTokenRange;
    struct _NSRange _intermediateTokenRange;
    struct _NSRange _originalContentRange;
    struct _NSRange _modifiedContentRange;
    unsigned long long _originalTokenHash;
    unsigned long long _modifiedTokenHash;
    DVTDiffDescriptor *_parentDiffDescriptor;
    NSMutableArray *_childDescriptors;
    NSDictionary *_subdescriptorResults;
    long long _diffDescriptorType;
    long long _diffMergeDirection;
    BOOL _resolved;
    BOOL _binaryConflict;
    BOOL _diffMergeDirectionLocked;
    NSIndexSet *_originalTokenizedRanges;
    NSIndexSet *_modifiedTokenizedRanges;
}

+ (void)initialize;
@property BOOL diffMergeDirectionLocked; // @synthesize diffMergeDirectionLocked=_diffMergeDirectionLocked;
@property BOOL binaryConflict; // @synthesize binaryConflict=_binaryConflict;
@property BOOL resolved; // @synthesize resolved=_resolved;
@property(retain) NSIndexSet *modifiedTokenizedRanges; // @synthesize modifiedTokenizedRanges=_modifiedTokenizedRanges;
@property(retain) NSIndexSet *originalTokenizedRanges; // @synthesize originalTokenizedRanges=_originalTokenizedRanges;
@property(retain) NSDictionary *subdescriptorResults; // @synthesize subdescriptorResults=_subdescriptorResults;
@property(retain) DVTDiffDescriptor *parentDiffDescriptor; // @synthesize parentDiffDescriptor=_parentDiffDescriptor;
@property struct _NSRange modifiedContentRange; // @synthesize modifiedContentRange=_modifiedContentRange;
@property struct _NSRange originalContentRange; // @synthesize originalContentRange=_originalContentRange;
@property unsigned long long modifiedTokenHash; // @synthesize modifiedTokenHash=_modifiedTokenHash;
@property unsigned long long originalTokenHash; // @synthesize originalTokenHash=_originalTokenHash;
@property struct _NSRange intermediateTokenRange; // @synthesize intermediateTokenRange=_intermediateTokenRange;
@property struct _NSRange ancestorTokenRange; // @synthesize ancestorTokenRange=_ancestorTokenRange;
@property long long diffDescriptorType; // @synthesize diffDescriptorType=_diffDescriptorType;
@property struct _NSRange modifiedTokenRange; // @synthesize modifiedTokenRange=_modifiedTokenRange;
@property struct _NSRange originalTokenRange; // @synthesize originalTokenRange=_originalTokenRange;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isInsertionOrDeletion;
- (void)diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
- (void)removeAllChildDiffDescriptors;
- (void)removeChildDiffDescriptorAtIndex:(long long)arg1;
- (void)removeChildDiffDescriptor:(id)arg1;
- (void)insertChildDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (void)addChildDiffDescriptor:(id)arg1;
- (void)removeObjectFromChildDiffDescriptorsAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inChildDiffDescriptorsAtIndex:(long long)arg2;
- (void)_diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)_diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
- (id)modifiedSubdescriptorIndexes;
- (id)modifiedSubdescriptors;
- (id)subdescriptors;
@property long long diffMergeDirection; // @dynamic diffMergeDirection;
- (BOOL)allowsThreeWayResolution;
- (id)childDiffDescriptors;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

