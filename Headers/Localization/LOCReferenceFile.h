//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Localization/NSCopying-Protocol.h>

@class NSString;

@interface LOCReferenceFile : NSObject <NSCopying>
{
    NSString *_filePath;
    NSString *_originalAttributeValue;
    NSString *_type;
}

@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *originalAttributeValue; // @synthesize originalAttributeValue=_originalAttributeValue;
@property(readonly, copy) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilePath:(id)arg1 originalAttributeValue:(id)arg2 type:(id)arg3;

@end

