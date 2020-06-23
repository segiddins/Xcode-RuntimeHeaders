//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEBuildParameters, NSString;

@interface IDEBuildOperationVariantSpecifier : NSObject
{
    IDEBuildParameters *_buildParameters;
    unsigned long long _sanitizerOptions;
    NSString *_buildLogSubtitle;
}

@property(readonly, copy, nonatomic) NSString *buildLogSubtitle; // @synthesize buildLogSubtitle=_buildLogSubtitle;
@property(readonly) unsigned long long sanitizerOptions; // @synthesize sanitizerOptions=_sanitizerOptions;
@property(readonly, copy, nonatomic) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
- (void).cxx_destruct;
- (id)initWithBuildParameters:(id)arg1 sanitizerOptions:(unsigned long long)arg2 buildLogSubtitle:(id)arg3;

@end

