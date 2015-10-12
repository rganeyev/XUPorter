//
//  Copyright (c) 2015 Supersonic. All rights reserved.
//

#import <Supersonic/SupersonicConfiguration.h>

@interface SUUnityAdsConfiguration : SupersonicConfiguration

@property (nonatomic, strong)   NSString *      gameId;

@property (nonatomic, strong)   NSDictionary *  options;
@property (nonatomic)           BOOL            enableLogging;
@property (nonatomic, strong)   NSString *      zoneId;

@end