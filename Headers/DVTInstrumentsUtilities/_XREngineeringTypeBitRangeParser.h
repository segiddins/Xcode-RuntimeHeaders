//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@class NSString;

@interface _XREngineeringTypeBitRangeParser : XRXMLElementParser
{
    NSString *_type;
    long long _start;
    long long _end;
}

+ (id)_elementNameToClassMap;
- (void).cxx_destruct;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)_handleCompletion;

@end

