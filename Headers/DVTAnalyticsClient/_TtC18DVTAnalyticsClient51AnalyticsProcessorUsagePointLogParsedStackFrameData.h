//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

@class NSNumber, NSString;

@interface _TtC18DVTAnalyticsClient51AnalyticsProcessorUsagePointLogParsedStackFrameData : DVTAnalyticsData
{
    // Error parsing type: , name: offset
    // Error parsing type: , name: function
    // Error parsing type: , name: fileName
    // Error parsing type: , name: indentLevel
    // Error parsing type: , name: isBlameFrame
    // Error parsing type: , name: library
    // Error parsing type: , name: sampleCount
    // Error parsing type: , name: lineNumber
    // Error parsing type: , name: address
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *address;
@property(nonatomic, retain) NSNumber *lineNumber; // @synthesize lineNumber;
@property(nonatomic, retain) NSNumber *sampleCount; // @synthesize sampleCount;
@property(nonatomic, copy) NSString *library;
@property(nonatomic, retain) NSNumber *isBlameFrame; // @synthesize isBlameFrame;
@property(nonatomic, retain) NSNumber *indentLevel; // @synthesize indentLevel;
@property(nonatomic, copy) NSString *fileName;
@property(nonatomic, copy) NSString *function;
@property(nonatomic, retain) NSNumber *offset; // @synthesize offset;

@end

