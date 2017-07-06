#include <benchmark/benchmark.h>

#include "bm_fast_writer.h"
#include "bm_reader.h"
#include "bm_styled_stream_writer.h"
#include "bm_styled_writer.h"

int main(int argc, char** argv)
{
	jpt::RegisterFastWriterTests();
	jpt::RegisterReaderTests();
	jpt::RegisterStyledStreamWriterTests();
	jpt::RegisterStyledWriterTests();

	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}
