//
//  Master_DetailMasterViewController.h
//  Master-Detail
//
//  Created by Sarah Esunis on 3/8/14.
//  Copyright (c) 2014 Sarah Esunis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Master_DetailMasterViewController : UITableViewController
{
    NSArray *Master;
     NSArray *Detail;
}
@property (strong, nonatomic) NSArray *Master;
@property (strong, nonatomic) NSArray *Detail;
@end
