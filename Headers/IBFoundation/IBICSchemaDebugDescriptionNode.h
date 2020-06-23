//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IBICSchemaDebugDescriptionNode : NSObject
{
    NSMutableArray *_subnodes;
    NSMutableDictionary *_attributes;
    NSString *_name;
}

+ (id)nodeWithDictionary:(id)arg1 name:(id)arg2 keyComparisonSelector:(SEL)arg3;
+ (id)nodeWithNestedDictionary:(id)arg1 firstName:(id)arg2 firstKeyComparator:(CDUnknownBlockType)arg3 secondName:(id)arg4 secondKeyComparator:(CDUnknownBlockType)arg5;
+ (id)nodeWithDictionary:(id)arg1 name:(id)arg2 keyComparator:(CDUnknownBlockType)arg3 objectNodeGenerator:(CDUnknownBlockType)arg4;
+ (id)nodeWithDictionary:(id)arg1 name:(id)arg2 keyComparator:(CDUnknownBlockType)arg3;
+ (id)nodeWithDictionary:(id)arg1 name:(id)arg2;
+ (id)nodeWithSet:(id)arg1 name:(id)arg2 comparisonSelector:(SEL)arg3;
+ (id)nodeWithSet:(id)arg1 name:(id)arg2 comparator:(CDUnknownBlockType)arg3;
+ (id)nodeWithArray:(id)arg1 name:(id)arg2;
+ (id)nodeWithObject:(id)arg1;
@property(readonly) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly) NSArray *subnodes; // @synthesize subnodes=_subnodes;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)generateOutput:(id)arg1 indent:(long long)arg2;
- (id)attributeText;
- (void)appendIndent:(long long)arg1 toBuffer:(id)arg2;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;
- (void)addNode:(id)arg1;
- (id)initWithName:(id)arg1;

@end

