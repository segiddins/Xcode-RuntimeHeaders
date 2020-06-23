//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
    id <NSObject> _observer;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (id)displayValueForOffset:(unsigned long long)arg1;
@property long long outlineStyleRowLimit;
@property BOOL autoDetectColorElements;
@property BOOL copyColumnNames;
@property BOOL hideOffsetColumn;
@property BOOL offsetInHexadecimal;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1;

@end

