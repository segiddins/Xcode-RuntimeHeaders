//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IDEProductsUICAReport : NSObject
{
    NSString *_eventName;
    NSMutableDictionary *_event;
}

+ (id)_defaultReportFields;
- (void).cxx_destruct;
- (void)recordNullForKey:(id)arg1;
- (void)recordString:(id)arg1 forKey:(id)arg2;
- (void)recordNumber:(id)arg1 forKey:(id)arg2;
- (void)_logReportCollecting:(CDUnknownBlockType)arg1;
- (id)_initWithEventName:(id)arg1;

@end

