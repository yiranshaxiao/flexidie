//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TNDRMessage.h"

@class TNDRUser;

@interface TNDRMessage : _TNDRMessage
{
}

+ (id)gifIDFromText:(id)arg1;
@property(readonly, nonatomic) TNDRUser *fromUser;
@property(readonly, nonatomic) _Bool isFromCurrentUser;
- (id)typeOfMessage;
- (_Bool)isOnlyEmoji;
- (id)gifID;
@property(readonly, nonatomic) _Bool isGIF;
- (void)resend:(id)arg1;
- (void)awakeFromInsert;

@end
