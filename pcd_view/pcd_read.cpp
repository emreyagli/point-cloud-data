#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/cloud_viewer.h>

int
 main (int argc, char** argv)
{

  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
  pcl::io::loadPCDFile <pcl::PointXYZ> ("OpenDoorSc1.pcd", *cloud);
  pcl::visualization::CloudViewer viewer ("Cluster viewer");
  viewer.showCloud (cloud);

  while (!viewer.wasStopped ())
  {
  }

  return (0);
}
