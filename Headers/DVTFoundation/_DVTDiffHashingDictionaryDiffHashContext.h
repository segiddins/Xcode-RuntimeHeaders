//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDiffDataSource;

@interface _DVTDiffHashingDictionaryDiffHashContext : NSObject
{
    DVTDiffDataSource *_dataSource;
    unsigned long long _diffHash;
}

- (void).cxx_destruct;
@property unsigned long long diffHash; // @synthesize diffHash=_diffHash;
@property(retain) DVTDiffDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1 diffHash:(unsigned long long)arg2;

@end

