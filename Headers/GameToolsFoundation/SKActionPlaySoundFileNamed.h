//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameToolsFoundation/GTFActionModel.h>

@class NSString;

@interface SKActionPlaySoundFileNamed : GTFActionModel
{
}

+ (id)keyPathsForValuesAffectingInspectorFileName;
- (void)setDurationOverride:(double)arg1;
@property(retain) NSString *fileName;
- (id)getSKAction;
- (id)actionInfoString;
- (id)actionColor;
- (id)actionName;
- (long long)actionType;
- (id)initWithFileNamed:(id)arg1;
@property(retain, nonatomic) NSString *inspectorFileName;

@end

