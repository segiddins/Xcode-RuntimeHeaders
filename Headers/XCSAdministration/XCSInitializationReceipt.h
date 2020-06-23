//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCSInitializationReceipt : NSObject
{
    NSString *_path;
}

@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (long long)compareShortVersionString:(id)arg1 toShortVersionString:(id)arg2;
- (long long)compare:(id)arg1;
- (id)installToPath:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *productBuildVersion;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *shortVersionString;
- (id)initWithPath:(id)arg1;

@end

