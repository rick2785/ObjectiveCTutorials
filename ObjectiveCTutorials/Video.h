//
//  Video.h
//  ObjectiveCTutorials
//
//  Created by Rickey Hrabowskie on 9/12/16.
//  Copyright © 2016 Rickey Hrabowskie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property (nonatomic,strong) NSString *videoTitle;
@property (nonatomic,strong) NSString *videoDescription;
@property (nonatomic,strong) NSString *videoIframe;
@property (nonatomic,strong) NSString *thumbnailUrl;
@end
