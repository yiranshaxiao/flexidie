//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBMGroupThreadPropertiesFetchStatus, FBMRTCCallData, FBMThreadQueueType, FBStringWithRedactedDescription, NSSet, NSString;

@interface FBMGroupThreadProperties : NSObject <NSCopying>
{
    NSString *_fbId;
    NSSet *_otherParticipantIds;
    FBStringWithRedactedDescription *_customName;
    NSString *_customPicHash;
    NSSet *_adminUserIds;
    NSString *_fbGroupId;
    NSString *_fbEventId;
    FBMThreadQueueType *_threadQueueType;
    FBMRTCCallData *_threadCallData;
    FBMGroupThreadPropertiesFetchStatus *_fetchStatus;
}

@property(readonly, copy, nonatomic) FBMGroupThreadPropertiesFetchStatus *fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(readonly, copy, nonatomic) FBMRTCCallData *threadCallData; // @synthesize threadCallData=_threadCallData;
@property(readonly, copy, nonatomic) FBMThreadQueueType *threadQueueType; // @synthesize threadQueueType=_threadQueueType;
@property(readonly, copy, nonatomic) NSString *fbEventId; // @synthesize fbEventId=_fbEventId;
@property(readonly, copy, nonatomic) NSString *fbGroupId; // @synthesize fbGroupId=_fbGroupId;
@property(readonly, copy, nonatomic) NSSet *adminUserIds; // @synthesize adminUserIds=_adminUserIds;
@property(readonly, copy, nonatomic) NSString *customPicHash; // @synthesize customPicHash=_customPicHash;
@property(readonly, copy, nonatomic) FBStringWithRedactedDescription *customName; // @synthesize customName=_customName;
@property(readonly, copy, nonatomic) NSSet *otherParticipantIds; // @synthesize otherParticipantIds=_otherParticipantIds;
@property(readonly, copy, nonatomic) NSString *fbId; // @synthesize fbId=_fbId;

- (id)initWithFbId:(id)arg1 otherParticipantIds:(id)arg2 customName:(id)arg3 customPicHash:(id)arg4 adminUserIds:(id)arg5 fbGroupId:(id)arg6 fbEventId:(id)arg7 threadQueueType:(id)arg8 threadCallData:(id)arg9 fetchStatus:(id)arg10;

@end

