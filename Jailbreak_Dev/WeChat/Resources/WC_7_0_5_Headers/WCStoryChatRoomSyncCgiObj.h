//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCStoryBaseCGIObj.h"

@class NSString;

@interface WCStoryChatRoomSyncCgiObj : WCStoryBaseCGIObj
{
    CDUnknownBlockType _syncStrangerBlock;
    NSString *_userName;
    NSString *_chatRoomName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
- (void)createRequest;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)init;
- (id)initWithUserName:(id)arg1 chatRoomName:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType syncStrangerBlock; // @synthesize syncStrangerBlock=_syncStrangerBlock;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)syncInfoFromContact:(id)arg1;

@end
