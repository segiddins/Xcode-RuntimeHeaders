//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDECoverage_Base-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol IDECoverage_File <NSObject, IDECoverage_Base>
@property(readonly, copy, nonatomic) NSString *ide_coverage_filePath;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_methods;
@property(readonly, nonatomic) unsigned long long ide_coverage_methodsCount;
@end
