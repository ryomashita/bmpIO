#include "bmpmini.hpp"

#include <gtest/gtest.h>

TEST(BmpMiniTest, Ctor) {
  image::BMPMini bmp;
  EXPECT_NE(&bmp, nullptr);
}

TEST(BmpMiniTest, Read) {
  image::BMPMini bmp;
  EXPECT_NO_THROW(bmp.read("lena_color.bmp"));
  EXPECT_EQ(bmp.get().width, 512);
  EXPECT_EQ(bmp.get().height, 512);
}

TEST(BmpMiniTest, Write) {
  image::BMPMini bmp;
  image::BMPMini bmp_copy;
  bmp.read("lena_color.bmp");
  bmp.write("lena_color_copy.bmp");
  bmp_copy.read("lena_color_copy.bmp");

  EXPECT_EQ(bmp.get().height, bmp_copy.get().height);
  EXPECT_EQ(bmp.get().width, bmp_copy.get().width);
  EXPECT_EQ(bmp.get().channels, bmp_copy.get().channels);
}