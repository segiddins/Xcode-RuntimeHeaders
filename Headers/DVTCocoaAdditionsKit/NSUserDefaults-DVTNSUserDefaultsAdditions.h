//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (DVTNSUserDefaultsAdditions)
+ (id)dvt_bufferedObjectForKey:(id)arg1;
+ (void)dvt_bufferedSetObject:(id)arg1 forKey:(id)arg2;
+ (void)accessBufferDefautlsForWriting:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dvt_setInteger:(long long)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
- (void)dvt_setBool:(BOOL)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3;
- (id)dvt_fontForKey:(id)arg1;
- (void)dvt_setFont:(id)arg1 forKey:(id)arg2;
- (id)dvt_colorForKey:(id)arg1;
- (void)dvt_setColor:(id)arg1 forKey:(id)arg2;
@end

