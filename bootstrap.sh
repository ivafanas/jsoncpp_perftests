# jsoncpp_preftests root diectory
ROOT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# jsoncpp_preftests build directory
BUILD_DIR=$ROOT_DIR/_build

# jsoncpp_preftests install directory
INSTALL_DIR=$ROOT_DIR/_install

# directories set for sltbench
SLTBENCH_ROOT_DIR=$ROOT_DIR/sltbench
SLTBENCH_BUILD_DIR=$BUILD_DIR/sltbench/build
SLTBENCH_INSTALL_DIR=$BUILD_DIR/sltbench/install

# directories set for googlebench
GOOGLEBENCH_ROOT_DIR=$ROOT_DIR/googlebench
GOOGLEBENCH_BUILD_DIR=$BUILD_DIR/googlebench/build
GOOGLEBENCH_INSTALL_DIR=$BUILD_DIR/googlebench/install

# directories set for jsoncpp
JSONCPP_ROOT_DIR=$ROOT_DIR/jsoncpp
JSONCPP_BUILD_DIR=$BUILD_DIR/jsoncpp/build
JSONCPP_INSTALL_DIR=$BUILD_DIR/jsoncpp/install

# make clean build directory
rm -rf $BUILD_DIR && mkdir -p $BUILD_DIR

# install sltbench
mkdir -p $SLTBENCH_BUILD_DIR
mkdir -p $SLTBENCH_INSTALL_DIR
cd $SLTBENCH_BUILD_DIR
cmake $SLTBENCH_ROOT_DIR \
	-DCMAKE_INSTALL_PREFIX=$SLTBENCH_INSTALL_DIR \
	-DCMAKE_BUILD_TYPE=Release
cmake --build $SLTBENCH_BUILD_DIR --target install

# install googlebench
mkdir -p $GOOGLEBENCH_BUILD_DIR
mkdir -p $GOOGLEBENCH_INSTALL_DIR
cd $GOOGLEBENCH_BUILD_DIR
cmake $GOOGLEBENCH_ROOT_DIR \
	-DCMAKE_INSTALL_PREFIX=$GOOGLEBENCH_INSTALL_DIR \
	-DCMAKE_BUILD_TYPE=Release \
	-DBENCHMARK_ENABLE_TESTING=NO
cmake --build $GOOGLEBENCH_BUILD_DIR --target install

# install jsoncpp
mkdir -p $JSONCPP_BUILD_DIR
cd $JSONCPP_BUILD_DIR
cmake $JSONCPP_ROOT_DIR \
	-DBUILD_STATIC_LIBS=ON \
	-DBUILD_SHARED_LIBS=OFF \
	-DCMAKE_INSTALL_PREFIX=$JSONCPP_INSTALL_DIR \
	-G "Unix Makefiles" \
	-DJSONCPP_WITH_TESTS=OFF \
	-DJSONCPP_WITH_POST_BUILD_UNITTEST=OFF \
	-DCMAKE_BUILD_TYPE=Release
cmake --build $JSONCPP_BUILD_DIR --target install

# build tests
cd $BUILD_DIR
cmake $ROOT_DIR \
	-DCMAKE_INSTALL_PREFIX=$INSTALL_DIR \
	-DCMAKE_BUILD_TYPE=Relase \
	-DJPT_SLTBENCH_INSTALL_DIR=$SLTBENCH_INSTALL_DIR \
	-DJPT_GOOGLEBENCH_INSTALL_DIR=$GOOGLEBENCH_INSTALL_DIR \
	-DJPT_JSONCPP_INSTALL_DIR=$JSONCPP_INSTALL_DIR \
	-DJPT_BUILD_DIR=$BUILD_DIR
cmake --build $BUILD_DIR
