//
//  Feed.h
//  ObjC-01
//
//  Created by Hariel Giacomuzzi on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "News.h"
#import "Update.h"
#import "Login.h"

@interface Feed : NSObject
{
}
@property NSMutableArray* arrayNews;
@property Update* up;
@property Login* userLogin;

- (NSMutableArray *) showNewsList;
- (News *) showNews : (short) newsType;
- (BOOL) verifyLogin;
- (void) callMenu;

<<<<<<< Updated upstream


@end

=======
@end
>>>>>>> Stashed changes
