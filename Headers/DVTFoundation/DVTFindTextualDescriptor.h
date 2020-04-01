//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFindDescriptor.h>

#import <DVTFoundation/DVTTextlikeFindDescriptor-Protocol.h>

@class NSString;

@interface DVTFindTextualDescriptor : DVTFindDescriptor <DVTTextlikeFindDescriptor>
{
    NSString *_findString;
    unsigned long long _matchStyle;
    BOOL _caseSensitive;
}

@property(readonly) unsigned long long matchStyle; // @synthesize matchStyle=_matchStyle;
- (BOOL)caseSensitive;
@property(readonly) NSString *findString; // @synthesize findString=_findString;
- (void).cxx_destruct;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(struct _NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 passingTest:(CDUnknownBlockType)arg5 docLocationCreationBlock:(CDUnknownBlockType)arg6;
- (struct _NSRange)_wordBoundaryAtIndex:(unsigned long long)arg1 forString:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)displayString;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithString:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

