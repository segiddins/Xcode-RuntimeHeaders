//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDESourcePackageVersionRange : NSObject <NSCopying>
{
    NSString *_minimumVersion;
    NSString *_maximumVersion;
}

@property(readonly) NSString *maximumVersion; // @synthesize maximumVersion=_maximumVersion;
@property(readonly) NSString *minimumVersion; // @synthesize minimumVersion=_minimumVersion;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2;

@end

