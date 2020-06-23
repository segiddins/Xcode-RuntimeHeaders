//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, XRIntKeyedDictionary;

@interface DTKPKDebugCodes : NSObject
{
    NSSet *_allKDebugCodes;
    XRIntKeyedDictionary *_codeMap;
}

+ (id)legacyTraceCodesURLForOS:(unsigned long long)arg1 productVersion:(id)arg2;
+ (id)codesFromURL:(id)arg1 error:(id *)arg2;
+ (id)localKDebugCodes:(id *)arg1;
+ (void)initialize;
@property(readonly, retain, nonatomic) NSSet *allKDebugCodes; // @synthesize allKDebugCodes=_allKDebugCodes;
- (void).cxx_destruct;
- (id)kdebugCodeByValue:(unsigned int)arg1;
- (id)kdebugCodeWithNameForCode:(CDUnion_1678db3a)arg1;
- (id)kdebugCodeWithNameForValue:(unsigned int)arg1;
- (id)initWithCodes:(id)arg1;

@end

