//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SKIndex/SKToolchainRequestObjectWrapper.h>

__attribute__((visibility("hidden")))
@interface SKToolchainRequestDictionary : SKToolchainRequestObjectWrapper
{
}

- (void)setStringArray:(id)arg1 forKey:(const char *)arg2;
- (void)setArray:(id)arg1 forKey:(const char *)arg2;
- (void)setUID:(struct compiler_uid_s *)arg1 forKey:(const char *)arg2;
- (void)setInt:(long long)arg1 forKey:(const char *)arg2;
- (void)setString:(id)arg1 forKey:(const char *)arg2;
- (id)initWithRequest:(struct compiler_uid_s *)arg1 sourceFile:(id)arg2 compilerArguments:(id)arg3 keyStrings:(struct SKToolchainUIDKeyStrings *)arg4;
- (id)init;

@end

