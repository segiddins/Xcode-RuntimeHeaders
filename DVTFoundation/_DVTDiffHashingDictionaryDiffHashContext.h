//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDiffDataSource;

@interface _DVTDiffHashingDictionaryDiffHashContext : NSObject
{
    DVTDiffDataSource *_dataSource;
    unsigned long long _diffHash;
}

@property unsigned long long diffHash; // @synthesize diffHash=_diffHash;
@property(retain) DVTDiffDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 diffHash:(unsigned long long)arg2;

@end

