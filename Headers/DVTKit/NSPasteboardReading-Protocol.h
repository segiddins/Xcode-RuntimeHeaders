//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSArray, NSPasteboard, NSString;

@protocol NSPasteboardReading <NSObject>
+ (NSArray *)readableTypesForPasteboard:(NSPasteboard *)arg1;

@optional
+ (unsigned long long)readingOptionsForType:(NSString *)arg1 pasteboard:(NSPasteboard *)arg2;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(NSString *)arg2;
@end

