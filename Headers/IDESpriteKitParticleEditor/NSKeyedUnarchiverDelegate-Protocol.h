//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class NSArray, NSKeyedUnarchiver, NSString;

@protocol NSKeyedUnarchiverDelegate <NSObject>

@optional
- (void)unarchiverDidFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiverWillFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiver:(NSKeyedUnarchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (id)unarchiver:(NSKeyedUnarchiver *)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(NSKeyedUnarchiver *)arg1 cannotDecodeObjectOfClassName:(NSString *)arg2 originalClasses:(NSArray *)arg3;
@end

