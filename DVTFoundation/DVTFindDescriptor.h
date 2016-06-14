//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSAttributedString, NSString;

@interface DVTFindDescriptor : NSObject <NSCopying, NSCoding>
{
}

+ (id)keyPathsForValuesAffectingDisplayAttributedString;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(struct _NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 passingTest:(CDUnknownBlockType)arg5 docLocationCreationBlock:(CDUnknownBlockType)arg6;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(struct _NSRange)arg3 docLocationCreationBlock:(CDUnknownBlockType)arg4;
@property(readonly) BOOL caseSensitive;
@property(readonly) NSString *displayString;
@property(readonly) NSAttributedString *displayAttributedString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

