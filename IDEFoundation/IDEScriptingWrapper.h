//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEScriptingElement.h>

@interface IDEScriptingWrapper : IDEScriptingElement
{
    id _client;
}

+ (id)wrapSingleton:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapItems:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapItem:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
@property(retain) id client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (BOOL)isEqual:(id)arg1;
- (id)scriptingID;
- (id)name;
- (id)description;

@end

