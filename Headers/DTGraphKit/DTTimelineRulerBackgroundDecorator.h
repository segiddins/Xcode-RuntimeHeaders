//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTTimelineDecorator.h>

@class NSDictionary;

@interface DTTimelineRulerBackgroundDecorator : DTTimelineDecorator
{
    NSDictionary *_attributes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)setDefaultsForPlane:(id)arg1;
- (void)decorateContainer:(struct DTTimelineDecorationContainer *)arg1 qualityOfService:(unsigned int)arg2 priority:(int)arg3 group:(id)arg4;
- (id)init;
- (id)initWithTimeLabelAttributes:(id)arg1;
- (BOOL)mustDecorateOnMainThread;

@end

