//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface DVTFindPatternComponents : NSObject <NSCopying>
{
    NSArray *_components;
}

+ (id)findPatternComponentsFromPasteboardPropertyList:(id)arg1;
+ (id)findPatternComponentsWithString:(id)arg1;
+ (id)emptyComponents;
- (void).cxx_destruct;
@property(readonly) NSArray *components; // @synthesize components=_components;
- (id)replacementExpression;
- (id)regularExpressionEscapingStrings:(BOOL)arg1 usingBackreferences:(BOOL)arg2;
- (id)regularExpression;
- (long long)patternStatus;
- (id)stringByDeletingPatterns;
- (id)stringComponents;
- (BOOL)hasContent;
- (id)summary;
- (id)propertyListRepresentation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFindPatternComponents:(id)arg1;
- (unsigned long long)hash;
- (id)initWithComponents:(id)arg1;

@end

