//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceFileLineCoverageData;

@interface IDECoverageAnnotationLineCoverage : NSObject
{
    unsigned long long _lineCoverageType;
    long long _lineNumber;
    long long _executionCount;
    DVTSourceFileLineCoverageData *_lineCoverageData;
}

@property(retain) DVTSourceFileLineCoverageData *lineCoverageData; // @synthesize lineCoverageData=_lineCoverageData;
@property long long executionCount; // @synthesize executionCount=_executionCount;
@property long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property unsigned long long lineCoverageType; // @synthesize lineCoverageType=_lineCoverageType;
- (void).cxx_destruct;
- (id)description;

@end

