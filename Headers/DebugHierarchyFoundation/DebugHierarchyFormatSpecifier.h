//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DebugHierarchyFormatSpecifier : NSObject
{
    NSString *_format;
    NSString *_label;
}

+ (id)specifierWithFormat:(id)arg1 label:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *format; // @synthesize format=_format;
- (id)initWithFormat:(id)arg1 label:(id)arg2;

@end

