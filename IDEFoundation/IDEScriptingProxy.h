//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEScriptingElement.h>

@interface IDEScriptingProxy : IDEScriptingElement
{
    id _key;
    id _collection;
}

+ (id)wrapDictionary:(id)arg1 inProxy:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapItemOfDictionary:(id)arg1 forKey:(id)arg2 inProxy:(Class)arg3 forContainer:(id)arg4 andAccessor:(id)arg5;
@property(retain) id collection; // @synthesize collection=_collection;
@property(retain) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (BOOL)isEqual:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)scriptingID;
- (id)name;
- (id)description;

@end

