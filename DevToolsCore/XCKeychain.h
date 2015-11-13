//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCKeychain : NSObject
{
}

+ (void)removePasswordForServiceName:(id)arg1 accountName:(id)arg2;
+ (void)setPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3;
+ (id)passwordForServiceName:(id)arg1 accountName:(id)arg2;
+ (id)_passwordForGenericAccount:(id)arg1 service:(id)arg2 itemRef:(struct OpaqueSecKeychainItemRef **)arg3;
+ (void)removePasswordForHost:(id)arg1 username:(id)arg2 port:(long long)arg3 protocol:(unsigned int)arg4;
+ (void)setPassword:(id)arg1 forHost:(id)arg2 username:(id)arg3 port:(long long)arg4 protocol:(unsigned int)arg5;
+ (id)passwordForHost:(id)arg1 username:(id)arg2 port:(long long)arg3 protocol:(unsigned int)arg4;
+ (id)_passwordForHost:(id)arg1 username:(id)arg2 port:(long long)arg3 protocol:(unsigned int)arg4 itemRef:(struct OpaqueSecKeychainItemRef **)arg5;
+ (int)_setPassword:(id)arg1 forKeychainItem:(struct OpaqueSecKeychainItemRef *)arg2;
+ (void)initialize;

@end

