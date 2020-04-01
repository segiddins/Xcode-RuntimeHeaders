//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface XCSTestActivityResult : XCSObject
{
    NSMutableArray *_subactivityResults;
    NSString *_title;
    NSString *_activityType;
    NSString *_UUID;
    NSDate *_start;
    NSDate *_finish;
    NSArray *_attachments;
}

@property(readonly, nonatomic) NSArray *subactivityResults; // @synthesize subactivityResults=_subactivityResults;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, nonatomic) NSDate *finish; // @synthesize finish=_finish;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)_saveLegacyAttachmentMetadata:(id)arg1;
- (id)activityResultWithTitle:(id)arg1 activityType:(id)arg2 UUID:(id)arg3 start:(id)arg4 finish:(id)arg5 attachments:(id)arg6 validationErrors:(id *)arg7;
- (id)initWithTitle:(id)arg1 activityType:(id)arg2 UUID:(id)arg3 start:(id)arg4 finish:(id)arg5 attachments:(id)arg6 validationErrors:(id *)arg7;

@end

